#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  bool *vals = new bool[n];
  for(int i = 0; i < n; ++i) {
    vals[i] = false;
  }
  int temp, minTillNow = n;
  while(m--) {
    std::cin >> temp;
    minTillNow = std::min(temp - 1, minTillNow);
    vals[minTillNow] = true;
  }
  int currentIndex;
  for(int i = 0; i < n; ++i) {
    if(vals[i]) currentIndex = i;
    std::cout << currentIndex + 1 << ((i == n - 1) ? '\n' : ' ');
  }
}
