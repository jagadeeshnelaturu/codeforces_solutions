#include <iostream>

#define STRING "CODEFORCES"

int main() {
  std::string s1, s2 = STRING;
  std::cin >> s1;
  int size1 = s1.size(), size2 = s2.size();
  if(size1 <= size2) {
    std::cout << "NO\n";
    return 0;
  }
  int index1, index2;
  for(index1 = 0; index1 < size2; ++index1) {
    if(s1[index1] != s2[index1]) break;
  }
  for(index2 = 0; index2 < size2; ++index2) {
    if(s1[size1 - 1 - index2] != s2[size2 - 1 - index2]) break;
  }
  std::cout << ((index1 + index2 >= size2) ? "YES" : "NO") << "\n";
}
