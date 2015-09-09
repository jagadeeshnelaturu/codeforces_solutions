#include <iostream>

#define LIMIT 10

int main() {
  long long int counts[2 * LIMIT + 1] = {0}, n, temp, sum = 0;
  std::cin >> n;
  while(n--) {
    std::cin >> temp;
    ++counts[temp + LIMIT];
  }
  for(int i = 0; i < LIMIT; ++i) {
    sum += counts[i] * counts[(LIMIT << 1) - i];
  }
  sum += ((counts[LIMIT] * (counts[LIMIT] - 1)) >> 1);
  std::cout << sum << '\n';
}
