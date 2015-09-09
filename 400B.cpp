#include <iostream>
#include <set>

int main() {
  int n, m;
  std::cin >> n >> m;
  char *inputs = new char[m];
  int gpos, spos;
  std::set<int> differences;
  while(n--) {
    for(int i = 0; i < m; ++i) {
      std::cin >> inputs[i];
      if(inputs[i] == 'G') gpos = i;
      else if(inputs[i] == 'S') spos = i;
    }
    if(gpos > spos) {
      std::cout << "-1\n";
      return 0;
    }
    else {
      differences.insert(spos - gpos);
    }
  }
  std::cout << differences.size() << '\n';
}
