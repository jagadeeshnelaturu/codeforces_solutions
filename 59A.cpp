#include <iostream>

int main() {
  std::string s;
  std::cin >> s;
  int size = s.size();
  char temp;
  int upperCase = 0, lowerCase = 0;
  for(int i = 0; i < s.size(); ++i) {
    temp = s[i];
    if((temp >= 'A') && (temp <= 'Z')) {
      ++upperCase;
    }
    else if((temp >= 'a') && (temp <= 'z')) {
      ++lowerCase;
    }
  }
  if(lowerCase >= upperCase) {
    for(int i = 0; i < size; ++i) {
      std::cout << (char)(tolower(s[i]));
    }
  }
  else if(lowerCase < upperCase) {
    for(int i = 0; i < size; ++i) {
      std::cout << (char)(toupper(s[i]));
    }
  }
  std::cout << '\n';
}
