#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  int n, m;
  std::cin >> n >> m;
  int n1 = 0, temp1, temp2;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp1;
    if(temp1 == 1) ++n1;
  }
  while(m--) {
    std::cin >> temp1 >> temp2;
    if(((temp2 - temp1 + 1) & 1) || (temp2 - temp1 + 1 > 2 * n1) || (temp2 - temp1 + 1 > 2 * (n - n1))) {
      std::cout << "0\n";
    }
    else {
      std::cout << "1\n";
    }
  }
}
