#include <iostream>

#define NUM_DIGITS 10

inline char next(char c) {
  if(c == '9') return '0';
  else return c + 1;
}

char increment(char c, int count) {
  for(int i = 0; i < count; ++i) {
    c = next(c);
  }
  return c;
}

int main() {
  int n;
  std::string s;
  std::cin >> n >> s;
  std::string min = s, temp, temp2;
  for(int i = 0; i < NUM_DIGITS; ++i) {
    temp = "";
    for(int j = 0; j < n; ++j) {
      temp += increment(s[j], i);
    }
    for(int j = 0; j < n; ++j) {
      temp2 = temp.substr(j) + temp.substr(0, j);
      min = std::min(min, temp2);
    }
  }
  std::cout << min << '\n';
}
