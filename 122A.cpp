#include <iostream>

#define LUCKY_COUNT 14

const int LUCKY_NUMBERS[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

bool isAlmostLucky(int n) {
  for(int i = 0; i < LUCKY_COUNT; ++i) {
    if(n % LUCKY_NUMBERS[i] == 0) return true;
  }
  return false;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << (isAlmostLucky(n) ? "YES" : "NO") << '\n';
}
