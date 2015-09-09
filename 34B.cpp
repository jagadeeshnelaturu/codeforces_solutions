#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::ios::sync_with_stdio(false);
  int n, m;
  std::cin >> n >> m;
  std::vector<int> buy;
  int temp;
  while(n--) {
    std::cin >> temp;
    if(temp < 0) {
      buy.push_back(-temp);
    }
  }
  int size = buy.size(), sum = 0;
  if(size > m) {
    std::sort(buy.begin(), buy.end());
    for(int i = size - 1; i >= size - m; --i) {
      sum += buy[i];
    }
  }
  else if(size <= m) {
    for(std::vector<int>::reverse_iterator it = buy.rbegin(); it != buy.rend(); ++it) {
      sum += *it;
    }
  }
  std::cout << sum << '\n';
}
