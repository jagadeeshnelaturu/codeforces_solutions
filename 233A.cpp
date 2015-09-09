#include <iostream>

int main() {
  int n;
  std::cin >> n;
  if(n % 2) {
    std::cout << "-1\n";
  }
  else {
    for(int i = n; i > 0; --i) {
      std::cout << i << " ";
    }
    std::cout << '\n';
  }
}
