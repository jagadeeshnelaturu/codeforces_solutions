#include <iostream>

int main() {
  std::string s, t;
  std::cin >> s >> t;
  int size = s.size();
  bool evenDifferences = true;
  for(int i = 0; i < size; ++i) {
    if(s[i] != t[i]) evenDifferences = !evenDifferences;
  }
  if(!evenDifferences) {
    std::cout << "impossible";
  }
  else {
    for(int i = 0; i < size; ++i) {
      if(s[i] == t[i]) {
        std::cout << s[i];
      }
      else if(evenDifferences) {
        std::cout << s[i];
        evenDifferences = false;
      }
      else {
        std::cout << t[i];
        evenDifferences = true;
      }
    }
  }
  std::cout << '\n';
}
