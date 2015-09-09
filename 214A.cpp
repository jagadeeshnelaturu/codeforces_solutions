#include <iostream>
#include <cmath>

int main() {
  int n, m;
  std::cin >> n >> m;
  int a = 0, solutions = 0;
  while(true) {
    int b = n - pow(a, 2);
    if(b < 0) break;
    else if(a + pow(b, 2) == m) ++solutions;
    ++a;
  }
  std::cout << solutions << '\n';
}
