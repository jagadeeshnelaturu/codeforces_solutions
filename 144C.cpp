#include <iostream>

#define ALPHABET_COUNT 26

inline int posInArray(char c) {
  if((c >= 'a') & (c <= 'z')) return c - 'a';
  else if(c == '?') return ALPHABET_COUNT;
}

bool good(int counts1[], int counts2[]) {
  for(int i = 0; i < ALPHABET_COUNT; ++i) {
    if(counts1[i] > counts2[i]) return false;
  }
  return true;
}

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;
  int size1 = s1.size(), size2 = s2.size();
  int count = 0;
  int counts1[ALPHABET_COUNT + 1] = {0}, counts2[ALPHABET_COUNT] = {0};
  if(size1 < size2) {
    std::cout << "0\n";
    return 0;
  }
  for(int i = 0; i < size2; ++i) {
    ++counts1[posInArray(s1[i])];
  }
  for(int i = 0; i < size2; ++i) {
    ++counts2[posInArray(s2[i])];
  }
  if(good(counts1, counts2)) ++ count;
  for(int i = 1; i <= size1 - size2; ++i) {
    --counts1[posInArray(s1[i - 1])];
    ++counts1[posInArray(s1[i + size2 - 1])];
    if(good(counts1, counts2)) ++ count;
  }
  std::cout << count << '\n';
}
