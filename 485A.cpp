#include <iostream>

int gcd(int a, int b) {
  int temp;
  while(b) {
    temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

bool isPowerOf2(int a) {
  while(!(a & 1)) {
    a = (a >> 1);
  }
  return (a == 1);
}

int main() {
  int a, m;
  std::cin >> a >> m;
  m /= gcd(a, m);
  std::cout << (isPowerOf2(m) ? "Yes" : "No") << '\n';
}
