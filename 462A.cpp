#include <iostream>

int main() {
  int n;
  std::cin >> n;
  bool** values = new bool*[n];
  for(int i = 0; i < n; ++i) {
    values[i] = new bool[n];
  }
  char c;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      std::cin >> c;
      if(c == 'x') values[i][j] = false;
      else if(c == 'o') values[i][j] = true;
    }
  }
  int count;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      count = 0;
      if((i > 0) && values[i - 1][j]) ++count;
      if((j < n - 1) && values[i][j + 1]) ++count;
      if((i < n - 1) && values[i + 1][j]) ++count;
      if((j > 0) && values[i][j - 1]) ++count;
      if(count % 2 == 1) {
        std::cout << "NO\n";
        return 0;
      }
    }
  }
  std::cout << "YES\n";
}
