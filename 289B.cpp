#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

typedef long long int ll;

int main() {
  int n, m, d;
  std::cin >> n >> m >> d;
  ll first, temp;
  std::vector<ll> vals(m * n);
  std::cin >> first;
  vals[0] = 0;
  for(int i = 1; i < m * n; ++i) {
    std::cin >> temp;
    if((temp - first) % d) {
      std::cout << "-1\n";
      return 0;
    }
    vals[i] = (temp - first) / d;
  }
  std::sort(vals.begin(), vals.end());
  int anchor = vals[(m * n) >> 1], sum = 0;
  for(int i = 0; i < m * n; ++i) {
    sum += std::abs(vals[i] - anchor);
  }
  std::cout << sum << '\n';
}

