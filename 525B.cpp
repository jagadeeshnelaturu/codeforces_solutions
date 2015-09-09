#include <iostream>

int main() {
  std::string s;
  std::cin >> s;
  int size = s.size(), half = (size >> 1);
  bool *change = new bool[half];
  for(int i = 0; i < half; ++i) {
    change[i] = 0;
  }
  int m, temp;
  std::cin >> m;
  while(m--) {
    std::cin >> temp;
    change[temp - 1] = !change[temp - 1];
  }
  bool current = false;
  for(int i = 0; i < half; ++i) {
    current ^= change[i];
    std::cout << (current ? s[size - i - 1] : s[i]);
  }
  if(size & 1) std::cout << s[half];
  for(int i = half - 1; i >= 0; --i) {
    std::cout << (current ? s[i] : s[size - i - 1]);
    current ^= change[i];
  }
  std::cout << '\n';
}
