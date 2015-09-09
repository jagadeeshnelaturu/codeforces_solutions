#include <iostream>

int main() {
  int size;
  std::cin >> size;
  int** values = new int*[size];
  for(int i = 0; i < size; ++i) {
    values[i] = new int[size];
  }
  for(int i = 0; i < size; ++i) {
    values[0][i] = 1;
  }
  for(int i = 1; i < size; ++i) {
    values[i][0] = 1;
  }
  for(int i = 1; i < size; ++i) {
    for(int j = i; j < size; ++j) {
      values[i][j] = values[i][j - 1] + values[i - 1][j];
    }
    for(int j = i + 1; j < size; ++j) {
      values[j][i] = values[j][i - 1] + values[j - 1][i];
    }
  }
  std::cout << values[size - 1][size - 1] << '\n';
}
