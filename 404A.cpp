#include <iostream>

int main() {
  int n;
  std::cin >> n;
  char temp, diagonal, nonDiagonal;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      std::cin >> temp;
      if((i == 0) && (j == 0)) diagonal = temp;
      else if((i == 0) && (j == 1)) {
        if(temp == diagonal) {
          std::cout << "NO\n";
          return 0;
        }
        nonDiagonal = temp;
      }
      else if((i == j) || (i + j == n - 1)) {
        if(temp != diagonal) {
          std::cout << "NO\n";
          return 0;
        }
      }
      else if(temp != nonDiagonal) {
        std::cout << "NO\n";
        return 0;
      }
    }
  }
  std::cout << "YES\n";
}
