#include <iostream>
#include <cmath>

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;
  int size1 = s1.size(), left = s1.find('|'), right = size1 - left - 1, size2 = s2.size();
  if((size2 < std::abs(left - right)) || ((size2 - left + right) & 1)) {
    std::cout << "Impossible\n";
    return 0;
  }
  int x = ((size2 + right - left) >> 1);
  for(int i = 0; i < left; ++i) {
    std::cout << s1[i];
  }
  for(int i = 0; i < x; ++i) {
    std::cout << s2[i];
  }
  for(int i = left; i < size1; ++i) {
    std::cout << s1[i];
  }
  for(int i = x; i < size2; ++i) {
    std::cout << s2[i];
  }
  std::cout << '\n';
}
