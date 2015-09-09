#include <iostream>
#include <map>

int main() {
  int n;
  std::cin >> n;
  std::map<int, int> counts;
  int temp, maxcount = 0;
  while(n--) {
    std::cin >> temp;
    if(!counts.count(temp)) {
      counts[temp] = 1;
      ++maxcount;
    }
    else if(counts[temp] == 1) {
      ++counts[temp];
      ++maxcount;
    }
  }
  std::map<int, int>::iterator it = --counts.end();
  if(it->second == 2) --maxcount;
  std::cout << maxcount << '\n';
  for(it = counts.begin(); it != counts.end(); ++it) {
    std::cout << it->first << " ";
    --(it->second);
  }
  --it;
  --it;
  while(it != --counts.begin()) {
    if(it->second) std::cout << it->first << " ";
    --it;
  }
  std::cout << '\n';
}
