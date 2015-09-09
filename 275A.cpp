#include <iostream>

#define SIDE_LENGTH 3

int main() {
  bool state[SIDE_LENGTH][SIDE_LENGTH];
  for(int i = 0; i < SIDE_LENGTH; ++i) {
    for(int j = 0; j < SIDE_LENGTH; ++j) {
      state[i][j] = 1;
    }
  }
  int temp;
  for(int i = 0; i < SIDE_LENGTH; ++i) {
    for(int j = 0; j < SIDE_LENGTH; ++j) {
      std::cin >> temp;
      if(temp % 2) {
        state[i][j] = !state[i][j];
        if(i != 0) state[i - 1][j] = !state[i - 1][j];
        if(i != SIDE_LENGTH - 1) state[i + 1][j] = !state[i + 1][j];
        if(j != 0) state[i][j - 1] = !state[i][j - 1];
        if(j != SIDE_LENGTH - 1) state[i][j + 1] = !state[i][j + 1];
      }
    }
  }
  for(int i = 0; i < SIDE_LENGTH; ++i) {
    for(int j = 0; j < SIDE_LENGTH; ++j) {
      std::cout << state[i][j];
    }
    std::cout << '\n';
  }
}
