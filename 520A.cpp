#include <iostream>

#define CHARACTER_COUNT 26

int main() {
  bool present[CHARACTER_COUNT];
  int n;
  std::cin >> n;
  char c;
  int x;
  while(n--) {
    std::cin >> c;
    if(('a' <= c) && (c <= 'z')) x = c - 'a';
    else if(('A' <= c) && (c <= 'Z')) x = c - 'A';
    present[x] = true;
  }
  for(int i=0; i< CHARACTER_COUNT; ++i) {
    if(!(present[i])) {
      std::cout << "NO\n";
      return 0;
    }
  }
  std::cout << "YES\n";
}
