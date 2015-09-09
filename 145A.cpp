#include <iostream>

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;
  int size = s1.size(), count1 = 0, count2 = 0;
  for(int i = 0; i < size; ++i) {
    if((s1[i] == '4') && (s2[i] == '7')) ++count1;
    else if((s1[i] == '7') && (s2[i] == '4')) ++count2;
  }
  std::cout << std::max(count1, count2) << '\n';
}
