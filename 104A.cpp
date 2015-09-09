#include <iostream>

int main() {
  int n;
  std::cin >> n;
  if((n < 11) || (n > 21)) {
    std::cout << "0\n";
  }
  else if((n == 11) || (n == 21)) {
    std::cout << "4\n";
  }
  else if((n >= 12) && (n <= 19)) {
    std::cout << "4\n";
  }
  else if(n == 20) {
    std::cout << "15\n";
  }
}
