#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  int n;
  std::cin >> n;
  char **inputs = new char*[n];
  for(int i = 0; i < n; ++i) {
    inputs[i] = new char[n];
    for(int j = 0; j < n; ++j) {
      std::cin >> inputs[i][j];
    }
  }
  int count, max = 0, i, j, k;
  for(i = 0; i < n; ++i) {
    count = 1;
    for(j = i + 1; j < n; ++j) {
      for(k = 0; k < n; ++k) {
        if(inputs[i][k] != inputs[j][k]) break;
      }
      if(k == n) ++count;
    }
    max = std::max(count, max);
  }
  std::cout << max << '\n';
}
