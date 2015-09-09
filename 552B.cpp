#include <iostream>

#define RADIX 10

int num_digits(int n) {
  int i = 1;
  while(n /= RADIX) ++i;
  return i;
}

int main() {
  int n;
  std::cin >> n;
  int p = num_digits(n);
  long long int sum = 0, mult = 1;
  for(int i = 1; i <= p; ++i) {
    sum += i * (((i == p) ? n : ((RADIX * mult) - 1)) - (mult - 1));
    mult *= RADIX;
  }
  std::cout << sum << '\n';
}

