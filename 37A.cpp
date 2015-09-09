#include <iostream>
#include <map>

int main() {
  int n;
  std::cin >> n;
  std::map<int, int> counts;
  int temp;
  while(n--) {
    std::cin >> temp;
    if(counts.count(temp) == 0) {
      counts[temp] = 0;
    }
    ++counts[temp];
  }
  int maxValue = 0;
  for(std::map<int, int>::iterator it = counts.begin(); it != counts.end(); ++it) {
    maxValue = std::max(maxValue, it->second);
  }
  std::cout << maxValue << " " << counts.size() << '\n';
}
