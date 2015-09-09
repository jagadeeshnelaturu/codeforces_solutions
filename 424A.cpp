#include <iostream>
#include <cmath>

int main() {
  std::ios::sync_with_stdio(false);
  int n;
  std::cin >> n;
  char *inputs = new char[n];
  int standing = 0;
  for(int i = 0; i < n; ++i) {
    std::cin >> inputs[i];
    if(inputs[i] == 'X') ++standing;
  }
  std::cout << std::abs(standing - (n >> 1)) << '\n';
  if(standing > (n >> 1)) {
    int count = standing;
    for(int i = 0; i < n; ++i) {
      if((inputs[i] == 'X') && (count > (n >> 1))) {
        inputs[i] = 'x';
        --count;
      }
      std::cout << inputs[i];
    }
  }
  else if(standing < (n >> 1)) {
    int count = standing;
    for(int i = 0; i < n; ++i) {
      if((inputs[i] == 'x') && (count < (n >> 1))) {
        inputs[i] = 'X';
        ++count;
      }
      std::cout << inputs[i];
    }
  }
  else if(standing == (n >> 1)) {
    for(int i = 0; i < n; ++i) {
      std::cout << inputs[i];
    }
  }
  std::cout << '\n';
}
