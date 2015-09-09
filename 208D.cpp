#include <iostream>

typedef long long int ll;

#define NUM_ITEMS 5

int main() {
  ll n;
  std::cin >> n;
  ll *values = new ll[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
  }
  ll costs[NUM_ITEMS];
  for(int i = 0; i < NUM_ITEMS; ++i) {
    std::cin >> costs[i];
  }
  ll counts[NUM_ITEMS] = {0}, currentPoints = 0;
  for(int i = 0; i < n; ++i) {
    currentPoints += values[i];
    for(int j = NUM_ITEMS - 1; j >= 0; --j) {
      counts[j] += currentPoints / costs[j];
      currentPoints %= costs[j];
    }
  }
  for(int i = 0; i < NUM_ITEMS; ++i) {
    std::cout << counts[i] << " ";
  }
  std::cout << '\n' << currentPoints << '\n';
}
