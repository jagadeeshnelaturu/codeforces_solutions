#include <iostream>

int main() {
  std::string s;
  std::cin >> s;
  int temp, size = s.size();
  if(s[0] == 'h') {
    std::cout << "http://";
    temp = 4;
  }
  else if(s[0] == 'f') {
    std::cout << "ftp://";
    temp = 3;
  }
  std::size_t found = s.find("ru", temp + 1);
  for(int i = temp; i < found; ++i) {
    std::cout << s[i];
  }
  std::cout << ".ru";
  if(found + 2 != size) {
    std::cout << "/";
    for(int i = found + 2; i < size; ++i) {
      std::cout << s[i];
    }
  }
  std::cout << '\n';
}
