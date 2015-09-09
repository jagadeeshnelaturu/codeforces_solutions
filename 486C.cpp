#include <iostream>
#include <cmath>

#define ALPHABET_COUNT 26

inline int difference(char c1, char c2) {
  int temp = std::abs(c2 - c1);
  return std::min(temp, ALPHABET_COUNT - temp);
}

int main() {
  int n, p;
  std::string s;
  std::cin >> n >> p >> s;
  int last = (n >> 1), sum = 0, l = -1, h = -1;
  for(int i = 0; i < last; ++i) {
    if(s[i] != s[n - 1 - i]) {
      sum += difference(s[i], s[n - 1 - i]);
      if(l == -1) l = i;
      h = i;
    }
  }
  --p;
  if(p >= last) p = n - 1 - p;
  if(l == -1) std::cout << "0\n";
  else if(p <= l) std::cout << sum + h - p << '\n';
  else if(p >= h) std::cout << sum + p - l << '\n';
  else std::cout << sum + std::min(p + h - (l << 1), (h << 1) - p - l) << '\n';
}
