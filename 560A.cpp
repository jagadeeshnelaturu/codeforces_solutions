#include <iostream>

int main() {
  int n;
  std::cin >> n;
  bool foundOne = false;
  int temp;
  while(n--) {
    std::cin >> temp;
    if(temp == 1) foundOne = true;
  }
  std::cout << (foundOne ? "-1" : "1") << '\n';
}
