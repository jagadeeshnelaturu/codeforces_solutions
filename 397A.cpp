#include <iostream>

int main() {
  int n, l, r;
  std::cin >> n >> l >> r;
  bool *noOverlap = new bool[r - l];
  for(int i = 0; i < r - l; ++i) {
    noOverlap[i] = true;
  }
  --n;
  int temp1, temp2;
  while(n--) {
    std::cin >> temp1 >> temp2;
    for(int i = std::max(temp1 - l, 0); i < std::min(temp2 - l, r - l); ++i) {
      noOverlap[i] = false;
    }
  }
  int count = 0;
  for(int i = 0; i < r - l; ++i) {
    count += noOverlap[i];
  }
  std::cout << count << '\n';
}
