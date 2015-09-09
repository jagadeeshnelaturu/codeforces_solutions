#include <iostream>

int main() {
  int c[5], sum = 0;
  for(int i = 0; i < 5; ++i) {
    std::cin >> c[i];
    sum += c[i];
  }
  if((sum == 0) || (sum % 5 != 0)) {
    std::cout << "-1\n";
  }
  else {
    std::cout << sum / 5 << '\n';
  }
}
