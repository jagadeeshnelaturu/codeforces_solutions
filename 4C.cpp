#include <iostream>
#include <map>

int main() {
  int n;
  std::cin >> n;
  std::map<std::string,int> counts;
  while(n--) {
    std::string name;
    std::cin >> name;
    if(counts.count(name)) {
      ++counts[name];
      std::cout << name << counts[name] << '\n';
    }
    else {
      std::cout << "OK\n";
      counts[name] = 0;
    }
  }
}
