#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int count = 0;
  int pi, qi;
  while(n--) {
    std::cin >> pi >> qi;
    if(qi - pi >= 2) ++count;
  }
  std::cout << count << '\n';
}
