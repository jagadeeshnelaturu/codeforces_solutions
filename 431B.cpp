#include <iostream>

#define SIZE 5

int main() {
  std::ios::sync_with_stdio(false);
  int g[SIZE][SIZE];
  for(int i = 0; i < SIZE; ++i) {
    for(int j = 0; j < SIZE; ++j) {
      std::cin >> g[i][j];
    }
  }
  int a1, a2, a3, a4, a5, max = 0;
  for(a1 = 0; a1 < SIZE; ++a1) {
    for(a2 = 0; a2 < SIZE; ++a2) {
      if(a2 == a1) continue;
      for(a3 = 0; a3 < SIZE; ++a3) {
        if((a3 == a1) || (a3 == a2)) continue;
        for(a4 = 0; a4 < SIZE; ++a4) {
          if((a4 == a1) || (a4 == a2) || (a4 == a3)) continue;
          for(a5 = 0; a5 < SIZE; ++a5) {
            if((a5 == a1) || (a5 == a2) || (a5 == a3) || (a5 == a4)) continue;
            max = std::max(max, g[a1][a2] + g[a2][a1] + g[a2][a3] + g[a3][a2] +
                                ((g[a3][a4] + g[a4][a3] + g[a4][a5] + g[a5][a4]) << 1));
          }
        }
      }
    }
  }
  std::cout << max << '\n';
}
