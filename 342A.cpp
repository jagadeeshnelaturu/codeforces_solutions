#include <iostream>

#define MAX 7

int main() {
  int n;
  std::cin >> n;
  int counts[MAX] = {0}, temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    ++counts[temp - 1];
  }
  if((counts[0] == counts[1] + counts[2]) &&
     (counts[0] == counts[3] + counts[5]) &&
     (counts[4] == 0) &&
     (counts[6] == 0) &&
     (counts[1] >= counts[3])) {
    for(int i = 0; i < counts[3]; ++i) {
      std::cout << "1 2 4\n";
    }
    for(int i = 0; i < counts[1] - counts[3]; ++i) {
      std::cout << "1 2 6\n";
    }
    for(int i = 0; i < counts[2]; ++i) {
      std::cout << "1 3 6\n";
    }
  }
  else {
    std::cout << "-1\n";
  }
}
