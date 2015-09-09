#include <iostream>

int gcd(int a, int b) {
  if(a < b) a = a + b - (b = a);
  int temp;
  while(true) {
    if(a % b == 0) return b;
    else if(a > b) {
      temp = a % b;
      a = b;
      b = temp;
    }
  }
}

int lcm(int a, int b) {
  return (a * b) / gcd(a, b);
}

int lcm(int a, int b, int c) {
  return lcm(lcm(a, b), c);
}

int lcm(int a, int b, int c, int d) {
  return lcm(lcm(a, b), lcm(c, d));
}

int main() {
  int k, l, m, n, d;
  std::cin >> k >> l >> m >> n >> d;
  int result = (d / k) + (d / l) + (d / m) + (d / n)
               - (d / lcm(k, l)) - (d / lcm(k, m)) - (d / lcm(k, n))
               - (d / lcm(l, m)) - (d / lcm(l, n)) - (d / lcm(m, n))
               + (d / lcm(k, l, m)) + (d / lcm(k, l, n))
               + (d / lcm(k, m, n)) + (d / lcm(l, m, n))
               - (d / lcm(k, l, m, n));
  std::cout << result << '\n';
}
