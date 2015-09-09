#include <iostream>

int gcd(int a, int b) {
  int temp;
  while(b != 0) {
    temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

inline int lcm(int a, int b) {
  return a * b / gcd(a, b);
}

inline int num_multiples(int num, int x, int y) {
  if(x > y) return 0;
  return (y / num) - ((x - 1) / num);
}

int main() {
  int x, y, a, b;
  std::cin >> x >> y >> a >> b;
  int l = lcm(x, y);
  std::cout << num_multiples(l, a, b) << '\n';
}
