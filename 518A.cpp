#include <iostream>

std::string next_dictionary_string(std::string s) {
  for(int i=s.length()-1; i>=0; --i) {
    if(s[i] != 'z') {
      ++(s[i]);
      break;
    }
    else {
      s[i] = 'a';
    }
  }
  return s;
}

int main() {
  std::string s,t;
  std::cin >> s >> t;
  s = next_dictionary_string(s);
  std::cout << ((s==t) ? "No such string" : s) << '\n';
}

