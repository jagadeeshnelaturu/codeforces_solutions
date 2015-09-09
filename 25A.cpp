#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int temp, first, second;
  std::cin >> temp;
  first = temp % 2;
  std::cin >> temp;
  second = temp % 2;
  if(first == second) {
    for(int i = 2; i <= n; ++i) {
      std::cin >> temp;
      if(temp % 2 != first) {
        std::cout << i + 1 << '\n';
        return 0;
      }
    }
  }
  else if(first != second) {
    std::cin >> temp;
    if(temp % 2 == first) {
      std::cout << "2\n";
      return 0;
    }
    else if(temp % 2 ==  second) {
      std::cout << "1\n";
      return 0;
    }
  }
}
