#include <iostream>
#include <map>

int main() {
  std::ios::sync_with_stdio(false);
  int n, temp;
  std::cin >> n;
  std::map<int, int> counts;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    ++counts[temp];
  }
  for(std::map<int, int>::iterator it = counts.begin(); it != counts.end(); ++it) {
    if(it->second > ((n + 1) >> 1)) {
      std::cout << "NO\n";
      return 0;
    }
  }
  std::cout << "YES\n";
}
