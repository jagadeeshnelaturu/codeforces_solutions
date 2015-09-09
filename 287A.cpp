#include <iostream>

#define SIDE_LENGTH 4
#define RADIUS 2

int main() {
  char c[SIDE_LENGTH][SIDE_LENGTH];
  for(int i = 0; i < SIDE_LENGTH; ++i) {
    for(int j = 0; j < SIDE_LENGTH; ++j) {
      std::cin >> c[i][j];
    }
  }
  int count;
  for(int i = 0; i < SIDE_LENGTH - RADIUS + 1; ++i) {
    for(int j = 0; j < SIDE_LENGTH - RADIUS + 1; ++j) {
      count = 0;
      for(int x = i; x < i + RADIUS; ++x) {
        for(int y = j; y < j + RADIUS; ++y) {
          count += (c[x][y] == '#');
        }
      }
      if(count != 2) {
        std::cout << "YES\n";
        return 0;
      }
    }
  }
  std::cout << "NO\n";
}
