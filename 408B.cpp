#include <iostream>

#define ALPHABET_COUNT 26

int main() {
  std::string s;
  std::cin >> s;
  int size = s.size(), counts1[ALPHABET_COUNT] = {0}, counts2[ALPHABET_COUNT] = {0};
  for(int i = 0; i < size; ++i) {
    ++counts1[s[i] - 'a'];
  }
  char c;
  while(std::cin >> c) {
    ++counts2[c - 'a'];
  }
  int count = 0;
  for(int i = 0; i < ALPHABET_COUNT; ++i) {
    if((counts1[i] == 0) && (counts2[i] != 0)) {
      std::cout << "-1\n";
      return 0;
    }
    count += std::min(counts1[i], counts2[i]);
  }
  std::cout << count << '\n';
}
