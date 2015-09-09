#include <iostream>
#include <map>

int main() {
  std::map<int, int> counts;
  int temp;
  for(int i = 0; i < 6; ++i) {
    std::cin >> temp;
    if(counts.count(temp) == 0) {
      counts[temp] = 1;
    }
    else {
      ++counts[temp];
    }
  }
  int distinct = counts.size(), i;
  std::map<int, int>::iterator j;
  switch(distinct) {
   case 1:
    std::cout << "Elephant\n";
    break;
   case 2:
    i = counts.begin()->second;
    if((i == 4) || (i == 2)) {
      std::cout << "Elephant\n";
    }
    else if((i == 5) || (i == 1)) {
      std::cout << "Bear\n";
    }
    else {
      std::cout << "Alien\n";
    }
    break;
   case 3:
    for(j = counts.begin(); j != counts.end(); ++j) {
      if(j->second == 4) {
        std::cout << "Bear\n";
        break;
      }
    }
    if(j == counts.end()) {
      std::cout << "Alien\n";
    }
    break;
   default:
    std::cout << "Alien\n";
  }
}
