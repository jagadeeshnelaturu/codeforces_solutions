#include <iostream>

int main() {
  std::string s;
  int k;
  std::cin >> s >> k;
  if(s.size() % k != 0) {
    std::cout << "NO\n";
    return 0;
  }
  int size = s.size(), length = size / k;
  for(int i = 0; i < k; ++i) {
    for(int j = 0; j < length/2; ++j) {
      if(s[i * length + j] != s[(i + 1) * length - 1 - j]) {
        std::cout << "NO\n";
        return 0;
      }
    }
  }
  std::cout << "YES\n";
}
