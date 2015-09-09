#include <iostream>

int main() {
  int n;
  std::cin >> n;
  bool* b = new bool[n];
  for(int i = 0; i < n; ++i) {
    b[i] = false;
  }
  int p;
  std::cin >> p;
  int temp;
  while(p--) {
    std::cin >> temp;
    b[temp - 1] = true;
  }
  int q;
  std::cin >> q;
  while(q--) {
    std::cin >> temp;
    b[temp - 1] = true;
  }
  for(int i = 0; i < n; ++i) {
    if(!b[i]) {
      std::cout << "Oh, my keyboard!\n";
      return 0;
    }
  }
  std::cout << "I become the guy.\n";
}
