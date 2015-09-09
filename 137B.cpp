#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  int n;
  std::cin >> n;
  bool *present = new bool[n];
  for(int i = 0; i < n; ++i) {
    present[i] = false;
  }
  int temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    if(temp <= n) present[temp - 1] = true;
  }
  int count = n;
  for(int i = 0; i < n; ++i) {
    count -= present[i];
  }
  std::cout << count << '\n';
}
