#include <iostream>

char left(char c, std::string keyboard) {
  for(int i = 0; i< keyboard.size(); ++i) {
    if(keyboard[i] == c) return keyboard[i - 1];
  }
}

char right(char c, std::string keyboard) {
  for(int i = 0; i< keyboard.size(); ++i) {
    if(keyboard[i] == c) return keyboard[i + 1];
  }
}


int main() {
  char direction;
  std::cin >> direction;
  std::string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
  char c;
  if(direction == 'L') {
    while(std::cin >> c) {
      std::cout << right(c, keyboard);
    }
  }
  else if(direction == 'R') {
    while(std::cin >> c) {
      std::cout << left(c, keyboard);
    }
  }
  std::cout << '\n';
}
