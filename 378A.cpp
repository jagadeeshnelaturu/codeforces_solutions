#include <iostream>
#include <cmath>

int main() {
  int a, b;
  std::cin >> a >> b;
  int count1 = 0, count2 = 0, count3 = 0;
  for(int i = 1; i <= 6; ++i) {
    int x1 = std::abs(i - a), x2 = std::abs(i - b);
    if(x1 < x2) ++count1;
    else if(x1 > x2) ++count3;
    else if(x1 == x2) ++count2;
  }
  std::cout << count1 << " " << count2 << " " << count3 << '\n';
}
