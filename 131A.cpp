#include <iostream>

bool isLower(char c) {
  return ((c >= 'a') && (c <= 'z'));
}

bool isUpper(char c) {
  return ((c >= 'A') && (c <= 'Z'));
}


void change(std::string& s) {
  char c;
  for(unsigned int i = 0; i < s.size(); ++i) {
    c = s[i];
    if(isLower(c)) {
      s[i] += 'A' - 'a';
    }
    else if(isUpper(c)) {
      s[i] += 'a' - 'A';
    }
  }
}

bool toChange(std::string& s) {
  int size = s.size();
  if(size == 1) {
    return true;
  }
  else {
    for(unsigned int i = 1; i < s.size(); ++i) {
      if(isLower(s[i])) return false;
    }
    return true;
  }
}

int main() {
  std::string s;
  std::cin >> s;
  if(toChange(s)) change(s);
  std::cout << s << '\n';
}
