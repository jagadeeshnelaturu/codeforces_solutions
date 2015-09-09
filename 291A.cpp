#include <iostream>
#include <map>

int main() {
  int n;
  std::cin >> n;
  std::map<int, int> calls;
  int temp;
  while(n--) {
    std::cin >> temp;
    ++calls[temp];
  }
  int numPairs = 0;
  for(std::map<int, int>::iterator it = calls.begin(); it != calls.end(); ++it) {
    if(!(it->first)) continue;
    if(it->second == 2) ++numPairs;
    else if(it->second > 2) {
      std::cout << "-1\n";
      return 0;
    }
  }
  std::cout << numPairs << '\n';
}
