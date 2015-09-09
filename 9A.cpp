#include <iostream>

int main() {
  int y, w;
  std::cin >> y >> w;
  int max = std::max(y, w);
  switch(max) {
   case 1:
    std::cout << "1/1\n";
    break;
   case 2:
    std::cout << "5/6\n";
    break;
   case 3:
    std::cout << "2/3\n";
    break;
   case 4:
    std::cout << "1/2\n";
    break;
   case 5:
    std::cout << "1/3\n";
    break;
   case 6:
    std::cout << "1/6\n";
    break;
   
  }
}
