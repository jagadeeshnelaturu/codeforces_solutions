#include <iostream>

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;
  int s = s1.size();
  for(int i = 0; i < s; ++i) {
    if(s1[i] != s2[s - i - 1]) {
      std::cout << "NO\n";
      return 0;
    }
  }
  std::cout << "YES\n";
}
