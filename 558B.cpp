#include <iostream>
#include <map>

int main() {
  int n;
  std::cin >> n;
  int* values = new int[n];
  std::map<int, int> counts, start, end;
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
    if(counts.count(values[i])) {
      ++counts[values[i]];
    }
    else {
      counts[values[i]] = 1;
      start[values[i]] = i;
    }
    end[values[i]] = i;
  }
  std::map<int, int>::iterator it = counts.begin();
  int bestval = it->first;
  ++it;
  while(it != counts.end()) {
    if((it->second > counts[bestval]) ||
       ((it->second == counts[bestval]) &&
        (end[it->first] - start[it->first] < end[bestval] - start[bestval]))) {
      bestval = it->first;
    }
    ++it;
  }
  std::cout << start[bestval] + 1 << " " << end[bestval] + 1<< '\n';
}
