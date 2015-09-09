#include <iostream>

int main() {
  int n;
  std::cin >> n;
  switch(n) {
   case 1:
   case 2:
    std::cout << "-1\n";
    break;
   default:
    for(int i = n; i >= 1; --i) {
      std::cout << i << ((i == 1) ? '\n' : ' ');
    }
  }
}
