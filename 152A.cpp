#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  char **values = new char*[m];
  for(int i = 0; i < m; ++i) {
    values[i] = new char[n];
  }
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      std::cin >> values[j][i];
    }
  }
  bool* successful = new bool[n];
  for(int i = 0; i < n; ++i) {
    successful[i] = false;
  }
  int maxval;
  for(int i = 0; i < m; ++i) {
    maxval = 0;
    for(int j = 0; j < n; ++j) {
      maxval = std::max(maxval, values[i][j] - '0');
    }
    for(int j = 0; j < n; ++j) {
      if(values[i][j] - '0' == maxval) successful[j] = true;
    }
  }
  int count = 0;
  for(int i = 0; i < n; ++i) count += successful[i];
  std::cout << count << '\n';
}
