#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  if(std::min(a, b) % 2 == 0) {
    std::cout << "Malvika\n";
  }
  else {
    std::cout << "Akshat\n";
  }
}
