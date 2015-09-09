#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  char **inputs = new char*[n];
  int minX = m - 1, minY = n - 1, maxX = 0, maxY = 0;
  for(int i = 0; i < n; ++i) {
    inputs[i] = new char[m];
    for(int j = 0; j < m; ++j) {
      std::cin >> inputs[i][j];
      if(inputs[i][j] == '*') {
        minX = std::min(minX, j);
        maxX = std::max(maxX, j);
        minY = std::min(minY, i);
        maxY = std::max(maxY, i);
      }
    }
  }
  for(int i = minY; i <= maxY; ++i) {
    for(int j = minX; j <= maxX; ++j) {
      std::cout << inputs[i][j];
    }
    std::cout << '\n';
  }
}

