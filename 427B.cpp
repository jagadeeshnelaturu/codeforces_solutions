#include <iostream>

int main() {
  int n, t, c;
  std::cin >> n >> t >> c;
  int count1 = 0, count2 = 0, temp;
  while(n--) {
    std::cin >> temp;
    if(temp > t) {
      count2 += std::max(0, count1 - c + 1);
      count1 = 0;
    }
    else {
      ++count1;
    }
  }
  count2 += std::max(0, count1 - c + 1);
  std::cout << count2 << '\n';
}
