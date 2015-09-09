#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  int n;
  std::cin >> n;
  int *pedal = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> pedal[i];
  }
  int m;
  std::cin >> m;
  int *rear = new int[m];
  for(int i = 0; i < m;++i) {
    std::cin >> rear[i];
  }
  int maxval = 0, count = 0, temp;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      if(!(rear[j] % pedal[i])) {
        temp = rear[j] / pedal[i];
        if(temp > maxval) {
          maxval = temp;
          count = 1;
        }
        else if(temp == maxval) {
          ++count;
        }
      }
    }
  }
  std::cout << count << '\n';
}

