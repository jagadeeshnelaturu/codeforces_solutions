#include <iostream>

int main() {
  int a, b, c, d, e, f, temp;
  std::cin >> temp >> a >> b >> c >> temp >> d >> e >> f >> temp;
  std::cout << ((-a - b + c + d + e + f) >> 1) << ' ' << a << ' ' << b << '\n'
            << c << ' ' << ((a + b - c - d + e + f) >> 1) << ' ' << d << '\n'
            << e << ' ' << f << ' ' << ((a + b + c + d - e - f) >> 1) << '\n';
}
