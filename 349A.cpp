#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int n25 = 0, n50 = 0;
  int temp;
  while(n--) {
    std::cin >> temp;
    if(temp == 25) {
      ++n25;
      continue;
    }
    else if(temp == 50) {
      if(n25 == 0) {
        std::cout << "NO\n";
        return 0;
      }
      else if(n25 != 0) {
        --n25;
        ++n50;
        continue;
      }
    }
    else if(temp == 100) {
      if((n25 > 0) && (n50 > 0)) {
        --n25;
        --n50;
        continue;
      }
      else if(n25 > 2) {
        n25 -= 3;
        continue;
      }
      else {
        std::cout << "NO\n";
        return 0;
      }
    }
  }
  std::cout << "YES\n";
}
