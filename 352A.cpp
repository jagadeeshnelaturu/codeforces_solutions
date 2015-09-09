#include <iostream>

int main() {
  int n, count0 = 0, count5 = 0, temp;
  std::cin >> n;
  while(n--) {
    std::cin >> temp;
    if(temp == 0) ++count0;
    else if(temp == 5) ++count5;
  }
  if(count0 == 0) {
    std::cout << "-1\n";
  }
  else if(count5 < 9) {
    std::cout << "0\n";
  }
  else {
    for(int i = 0; i < 9 * (count5 / 9); ++i) {
      std::cout << "5";
    }
    for(int i = 0; i < count0; ++i) {
      std::cout << "0";
    }
    std::cout << '\n';
  }
}
