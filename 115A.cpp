#include <iostream>
#include <vector>
#include <list>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> parents(n);
  std::vector< std::list<int> > children(n);
  std::vector<bool> isleaf(n, true);
  int temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    parents[i] = temp - 1;
    if(temp == -1) continue;
    children[temp - 1].push_back(i);
    isleaf[temp - 1] = false;
  }
  std::vector<int> counts(n, 0);
  for(int i = 0; i < n; ++i) {
    if(!isleaf[i]) continue;
    int j = i, count = 1;
    while(j != -2) {
      if(count <= counts[j]) break;
      counts[j] = count;
      ++count;
      j = parents[j];
    }
  }
  int max = 0;
  for(int i = 0; i < n; ++i) {
    max = std::max(max, counts[i]);
  }
  std::cout << max << '\n';
}
