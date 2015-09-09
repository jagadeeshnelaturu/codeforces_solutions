#include <iostream>

int main() {
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  double ratio = (double) (a * (250 - std::min(175, c))) / (b * (250 - std::min(175, d)));
  if(ratio < 1) {
    std::cout << "Vasya\n";
  }
  if(ratio == 1) {
    std::cout << "Tie\n";
  }
  if(ratio > 1) {
    std::cout << "Misha\n";
  }
}
