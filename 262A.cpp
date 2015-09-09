#include <iostream>

#define RADIX 10

bool atMostKLucky(int temp, int k) {
  int luckyCount = 0, currentDigit;
  while(temp) {
    currentDigit = temp % RADIX;
    temp /= RADIX;
    if((currentDigit == 4) || (currentDigit == 7)) {
      ++luckyCount;
      if(luckyCount == k + 1) return false;
    }
  }
  return true;
}

int main() {
  int n, k;
  std::cin >> n >> k;
  int count = 0, temp;
  while(n--) {
    std::cin >> temp;
    if(atMostKLucky(temp, k)) ++count;
  }
  std::cout << count << '\n';
}
