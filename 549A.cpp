#include <iostream>

bool check(char c1, char c2, char c3, char c4) {
  bool found[4];
  char values[4];
  for(int i = 0; i < 4; ++i) {
    found[i] = false;
  }
  values[0] = c1;
  values[1] = c2;
  values[2] = c3;
  values[3] = c4;
  for(int i = 0; i < 4; ++i) {
    switch(values[i]) {
     case 'f':
      found[0] = true;
      break;
     case 'a':
      found[1] = true;
      break;
     case 'c':
      found[2] = true;
      break;
     case 'e':
      found[3] = true;
      break;
    }
  }
  for(int i = 0; i < 4; ++i) {
    if(!found[i]) return false;
  }
  return true;
}

int main() {
  int n, m;
  std::cin >> n >> m;
  char** values = new char*[n];
  for(int i = 0; i < n; ++i) {
    values[i] = new char[m];
    for(int j = 0; j < m; ++j) {
      std::cin >> values[i][j];
    }
  }
  int numFaces = 0;
  for(int i = 0; i < n - 1; ++i) {
    for(int j = 0; j < m - 1; ++j) {
      numFaces += check(values[i][j], values[i + 1][j], values[i][j + 1], values[i + 1][j + 1]);
    }
  }
  std::cout << numFaces << '\n';
}
