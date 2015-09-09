#include <iostream>
#include <vector>
#include <algorithm>

typedef long long int ll;

#define ALPHABET_COUNT 26

int main() {
  ll n, k;
  std::cin >> n >> k;
  std::vector<ll> counts(ALPHABET_COUNT, 0);
  char c;
  while(n--) {
    std::cin >> c;
    ++counts[c - 'A'];
  }
  std::sort(counts.begin(), counts.end(), std::greater<ll> ());
  ll sum = 0, currentcount = 0;
  for(int i = 0; i < ALPHABET_COUNT; ++i) {
    if(currentcount + counts[i] >= k) {
      sum += (k - currentcount) * (k - currentcount);
      break;
    }
    sum += counts[i] * counts[i];
    currentcount += counts[i];
  }
  std::cout << sum << '\n';
}
