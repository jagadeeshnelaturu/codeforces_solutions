#include <iostream>

bool isCross(char** vals, int x, int y) {
  return ((vals[x][y] == '.') && (vals[x][y + 1] == '#') && (vals[x][y + 2] == '.') &&
          (vals[x + 1][y] == '#') && (vals[x + 1][y + 1] == '#') && (vals[x + 1][y + 2] == '#') &&
          (vals[x + 2][y + 1] == '#'));
}

int main() {
  int n;
  std::cin >> n;
  char **vals = new char*[n];
  for(int i = 0; i < n; ++i) {
    vals[i] = new char[n];
    for(int j = 0; j < n ; ++j) {
      std::cin >> vals[i][j];
    }
  }
  for(int i = 0; i < n; ++i) {
    if((i == n - 2) || (i == n - 1)) {
      for(int j = 0; j < n; ++j) {
        if(vals[i][j] == '#') {
          std::cout << "NO\n";
          return 0;
        }
      }
      continue;
    }
    if(vals[i][0] == '#') {
      std::cout << "NO\n";
      return 0;
    }
    for(int j = 1; j < n - 1; ++j) {
      if(vals[i][j] == '#') {
        if(!isCross(vals, i, j - 1)) {
          std::cout << "NO\n";
          return 0;
        }
        vals[i][j] = '.';
        vals[i + 1][j - 1] = '.';
        vals[i + 1][j] = '.';
        vals[i + 1][j + 1] = '.';
        vals[i + 2][j] = '.';
      }
    }
    if(vals[i][n - 1] == '#') {
      std::cout << "NO\n";
      return 0;
    }
  }
  std::cout << "YES\n";
  return 0;
}
