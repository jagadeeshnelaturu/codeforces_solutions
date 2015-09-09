#include <iostream>

int main() {
  int na, nb, k, m;
  std::cin >> na >> nb >> k >> m;
  int temp, val1, val2;
  for(int i = 0; i < na; ++i) {
    std::cin >> temp;
    if(i == k - 1) val1 = temp; 
  }
  for(int i = 0; i < nb; ++i) {
    std::cin >> temp;
    if(i == nb - m) val2 = temp; 
  }
 std::cout << ((val1 < val2) ? "YES" : "NO") << '\n';
}
