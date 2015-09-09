#include <iostream>

int main() {
  std::string s;
  std::cin >> s;
  int size = s.size() - 1;
  int* values = new int[size];
  for(int i = 0; i < size; ++i) {
    values[i] = ((i == 0) ? 0 : values[i - 1]) + (s[i] == s[i + 1]);
  }
  int m;
  std::cin >> m;
  int l, r;
  while(m--) {
    std::cin >> l >> r;
    std::cout << values[r - 2] - ((l > 1) ? values[l - 2] : 0) << '\n';
  }
}
