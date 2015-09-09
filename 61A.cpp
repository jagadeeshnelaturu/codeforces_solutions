#include <iostream>

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;
  int size = s1.size();
  for(int i = 0; i < size; ++i) {
    std::cout << (s1[i] != s2[i]);
  }
  std::cout << '\n';
}
