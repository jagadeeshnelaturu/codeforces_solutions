#include <iostream>

int main() {
  int r, c;
  std::cin >> r >> c;
  bool* rows = new bool[r];
  for(int i = 0; i < r; ++i) {
    rows[i] = false;
  }
  bool* columns = new bool[c];
  for(int i = 0; i < c; ++i) {
    columns[i] = false;
  }
  char temp;
  for(int i = 0; i < r; ++i) {
    for(int j = 0; j < c; ++j) {
      std::cin >> temp;
      if(temp == 'S') {
        rows[i] = true;
        columns[j] = true;
      }
    }
  }
  int freeRows = 0, freeColumns = 0;
  for(int i = 0; i < r; ++i) {
    if(rows[i] == false) {
      ++freeRows;
    }
  }
  for(int i = 0; i < c; ++i) {
    if(columns[i] == false) {
      ++freeColumns;
    }
  }
  int answer = c * freeRows + r * freeColumns - freeRows * freeColumns;
  std::cout << answer << '\n';
}
