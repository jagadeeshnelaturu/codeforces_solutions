#include <iostream>
#include <vector>
#include <algorithm>

bool operator<(std::pair<int, int> p1, std::pair<int, int> p2) {
  return p1.first < p2.first;
}

void print(std::vector< std::pair<int, int> >& v) {
  for(std::vector< std::pair<int, int> >::iterator it = v.begin(); it != v.end(); ++it) {
    std::cout << it->second << ' ';
  }
  std::cout << '\n';
}

int main() {
  int n;
  std::cin >> n;
  std::vector< std::pair<int, int> > inputs(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> inputs[i].first;
    inputs[i].second = i + 1;
  }
  std::sort(inputs.begin(), inputs.end());
  int index1 = -1, index2 = -1;
  for(int i = 0; i < n - 1; ++i) {
    if(inputs[i].first == inputs[i + 1].first) {
      if(index1 == -1) index1 = i;
      else {
        index2 = i;
        break;
      }
    }
  }
  if(index2 == -1) {
    std::cout << "NO\n";
    return 0;
  }
  std::cout << "YES\n";
  print(inputs);
  swap(inputs[index1], inputs[index1 + 1]);
  print(inputs);
  swap(inputs[index2], inputs[index2 + 1]);
  print(inputs);
}
