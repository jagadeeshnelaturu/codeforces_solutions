#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  if(((a + b + c) & 1) || (a + b < c) || (a + c < b) || (b + c < a)) {
    std::cout << "Impossible\n";
  }
  else {
    std::cout << ((a + b - c) >> 1) << ' ' << ((-a + b + c) >> 1) << ' ' << ((a - b + c) >> 1) << '\n';
  }
}
