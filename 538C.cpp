#include <iostream>
#include <cmath>

int main() {
  int n, m;
  std::cin >> n >> m;
  int *days = new int[m], *heights = new int[m];
  for(int i = 0; i < m; ++i) {
    std::cin >> days[i] >> heights[i];
  }
  int maxheight = std::max(heights[0] + days[0] - 1, heights[m - 1] + n - days[m - 1]);
  for(int i = 1; i < m; ++i) {
    maxheight = std::max(maxheight, heights[i]);
    if(std::abs(heights[i] - heights[i - 1]) > days[i] - days[i - 1]) {
      std::cout << "IMPOSSIBLE\n";
      return 0;
    }
    maxheight = std::max(maxheight, ((heights[i] + heights[i - 1] + days[i] - days[i - 1]) >> 1));
  }
  
  std::cout << maxheight << '\n';
}
