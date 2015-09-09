#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> boys(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> boys[i];
  }
  int m;
  std::cin >> m;
  std::vector<int> girls(m);
  for(int i = 0; i < m; ++i) {
    std::cin >> girls[i];
  }
  std::sort(boys.begin(), boys.end());
  std::sort(girls.begin(), girls.end());
  int i = 0, j = 0, count = 0;
  while(true) {
    if((i == n) || (j == m)) break;
    else if(boys[i] < girls[j] - 1) ++i;
    else if(boys[i] > girls[j] + 1) ++j;
    else {
      ++count;
      ++i;
      ++j;
    }
  }
  std::cout << count << '\n';
}
