#include <iostream>
#include <map>

int main() {
  int n;
  std::cin >> n;
  int *home = new int[n], *away = new int[n];
  std::map<int, int> homecounts;
  for(int i = 0; i < n; ++i) {
    std::cin >> home[i] >> away[i];
    ++homecounts[home[i]];
  }
  int diff;
  for(int i = 0; i < n; ++i) {
    diff = homecounts[away[i]];
    std::cout << n - 1 + diff << ' ' << n - 1 - diff << '\n';
  }
}
