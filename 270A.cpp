#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int angle;
  while(n--) {
    std::cin >> angle;
    if(360 % (180 - angle) == 0) {
      std::cout << "YES\n";
    }
    else {
      std::cout << "NO\n";
    }
  }
}
