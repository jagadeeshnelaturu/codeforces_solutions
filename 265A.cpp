#include <iostream>

int main() {
  std::string s;
  std::cin >> s;
  int currentPos = 0;
  char temp;
  while(std::cin >> temp) {
    if(temp == s[currentPos]) ++currentPos;
  }
  std::cout << currentPos + 1 << '\n';
}
