#include <iostream>

#define ALPHABET_COUNT 26

int main() {
  std::string s1;
  std::cin >> s1;
  int size = s1.size();
  int counts[ALPHABET_COUNT] = {0};
  for(int i = 0; i < size; ++i) {
    ++counts[s1[i] - 'A'];
  }
  std::cin >> s1;
  size = s1.size();
  for(int i = 0; i < size; ++i) {
    ++counts[s1[i] - 'A'];
  }
  std::cin >> s1;
  size = s1.size();
  for(int i = 0; i < size; ++i) {
    --counts[s1[i] - 'A'];
  }
  for(int i = 0; i < ALPHABET_COUNT; ++i) {
    if(counts[i] != 0) {
      std::cout << "NO\n";
      return 0;
    }
  }
  std::cout << "YES\n";
}
