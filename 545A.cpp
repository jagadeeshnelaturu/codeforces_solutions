#include <iostream>

int main() {
  int n;
  std::cin >> n;
  bool* good = new bool[n];
  for(int i = 0 ; i < n; ++i) {
    good[i] = true;
  }
  int temp, badCount = 0;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      std::cin >> temp;
      switch(temp) {
       case -1:
        break;
       case 0:
        break;
       case 1:
        if(good[i]) ++badCount;
        good[i] = false;
        break;
       case 2:
        if(good[j]) ++badCount;
        good[j] = false;
        break;
       case 3:
        if(good[i]) ++badCount;
        if(good[j]) ++badCount;
        good[i] = false;
        good[j] = false;
        break;
      }
    }
  }
  std::cout << n - badCount << '\n';
  for(int i = 0; i < n; ++i) {
    if(good[i]) std::cout << i + 1 << " ";
  }
  if(badCount != n) std::cout << '\n';
}
