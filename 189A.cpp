#include <iostream>
#include <climits>

int f2(int n, int c) {
  if((n % c == 0)) return n / c;
  //if(n < c) return 0;
  else return INT_MIN;
}

int f1(int n, int b, int c) {
  if(n == 0) return 0;
  if(n < b) return INT_MIN;
  return std::max(1 + f1(n - b, b, c), f2(n, c));
}

int f(int n, int a, int b, int c) {
  if(n == 0) return 0;
  if(n < a) return INT_MIN;
  return std::max(1 + f(n - a, a, b, c), f1(n, b, c));
}

int main() {
  int n, a, b, c;
  std::cin >> n >> a >> b >> c;

  // putting a, b, c in non-decreasing order
  if(a > b) {
    b = a + b - (a = b);
  }
  if(b > c) {
    c = b + c - (b = c);
  }
  if(a > b) {
    b = a + b - (a = b);
  }

  std::cout << f(n, a, b, c) << '\n';
}
