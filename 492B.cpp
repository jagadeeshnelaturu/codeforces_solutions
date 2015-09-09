#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

int main() {
  int n, l;
  std::cin >> n >> l;
  std::vector<int> positions(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> positions[i];
  }
  std::sort(positions.begin(), positions.end());
  int maxdiff = 0;
  for(int i = 0; i < n - 1; ++i) {
    maxdiff = std::max(maxdiff, std::abs(positions[i + 1] - positions[i]));
  }
  double halfdistance = (double)maxdiff / 2, edge = std::max(positions[0], l - positions[n - 1]);
  printf("%f\n", std::max(halfdistance, edge));
}
