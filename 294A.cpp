#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int *vals = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> vals[i];
  }
  int m;
  std::cin >> m;
  int x, y;
  while(m--) {
    std::cin >> x >> y;
    if(x != 1) vals[x - 2] += y - 1;
    if(x != n) vals[x] += vals[x - 1] - y;
    vals[x - 1] = 0;
  }
  for(int i = 0; i < n; ++i) {
    std::cout << vals[i] << '\n';
  }
}
