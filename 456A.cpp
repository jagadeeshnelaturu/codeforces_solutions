#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int temp1, temp2;
  while(n--) {
    std::cin >> temp1 >> temp2;
    if(temp1 != temp2) {
      std::cout << "Happy Alex\n";
      return 0;
    }
  }
  std::cout << "Poor Alex\n";
}
