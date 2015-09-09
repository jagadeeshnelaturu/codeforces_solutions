#include <iostream>
#include <cstdlib>

int main() {
  std::string s;
  std::cin >> s;
  std::size_t decimal = s.find('.');
  if(s[decimal - 1] == '9') {
    std::cout << "GOTO Vasilisa.\n";
    return 0;
  }
  if(s[decimal + 1] > '4') {
    ++s[decimal - 1];
  }
  std::cout << s.substr(0, decimal) << '\n';
}
