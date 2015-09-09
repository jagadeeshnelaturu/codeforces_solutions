#include <iostream>
#include <vector>
#include <algorithm>

struct dragon {
  int strength, exp;
};

bool operator< (const dragon& a, const dragon& b) {
  if(a.strength != b.strength) return (a.strength < b.strength);
  else return a.exp > b.exp;
}

int main() {
  int s, n;
  std::cin >> s >> n;
  std::vector<dragon> values(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i].strength >> values[i].exp;
  }
  std::sort(values.begin(), values.end());
  for(int i = 0; i < n; ++i) {
    if(s <= values[i].strength) {
      std::cout << "NO\n";
      return 0;
    }
    s += values[i].exp;
  }
  std::cout << "YES\n";
}

