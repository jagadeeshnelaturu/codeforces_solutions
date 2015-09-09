#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int firstZero = 0, i;
  char temp;
  for(i = 0; i < n; ++i) {
    std::cin >> temp;
    if(temp == '0') break;
  }
  std::cout << i + ((i < n) ? 1 : 0) << '\n';
}
