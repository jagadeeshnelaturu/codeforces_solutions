#include <iostream>

bool check(bool** values, int n, int m, int x, int y) {
  return (x >= 0) && (y >= 0) && (x < n - 1) && (y < m - 1) &&
         values[x][y] && values[x][y + 1] && values[x + 1][y] && values[x + 1][y + 1];
}

int main() {
  int n, m, k;
  std::cin >> n >> m >> k;
  bool** values = new bool*[n];
  for(int i = 0; i < n; ++i) {
    values[i] = new bool[m];
    for(int j = 0; j < m; ++j) {
      values[i][j] = false;
    }
  }
  int temp1, temp2;
  for(int i = 0; i < k; ++i) {
    std::cin >> temp1 >> temp2;
    values[temp1 - 1][temp2 - 1] = true;
    if(check(values, n, m, temp1 - 2, temp2 - 2) ||
       check(values, n, m, temp1 - 1, temp2 - 2) ||
       check(values, n, m, temp1 - 2, temp2 - 1) ||
       check(values, n, m, temp1 - 1, temp2 - 1)) {
      std::cout << i + 1 << '\n';
      return 0;
    }
  }
  std::cout << "0\n";
}
