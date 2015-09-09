#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  char *vals = new char[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> vals[i];
  }
  int i, j, diff;
  for(i = 0; i < n; ++i) {
    if(vals[i] == '.') continue;
    for(j = i + 1; j < n; ++j) {
      if(vals[j] == '.') continue;
      diff = j - i;
      if(i + 4 * diff >= n) break;
      if((vals[i + 2 * diff] == '*') && (vals[i + 3 * diff] == '*') && (vals[i + 4 * diff] == '*')) {
        std::cout << "yes\n";
        return 0;
      }
    }
  }
  std::cout << "no\n";
}
