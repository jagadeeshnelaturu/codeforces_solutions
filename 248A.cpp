#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int temp1, temp2, count1 = 0, count2 = 0;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp1 >> temp2;
    count1 += temp1;
    count2 += temp2;
  }
  std::cout << std::min(count1, n - count1) + std::min(count2, n - count2) << '\n';
}
