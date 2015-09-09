#include <iostream>

bool is_palindrome(char* s, int size) {
  for(int i = 0; i <= (size / 2); ++i) {
    if(s[i] != s[size - 1 - i]) return false;
  }
  return true;
}

int main() {
  std::string s;
  std::cin >> s;
  int size = s.size();
  char* c = new char[size + 1];
  for(char temp = 'a'; temp <= 'z'; ++temp) {
    for(int i = 0; i <= size; ++i) {
      for(int j = 0; j < i; ++j) {
        c[j] = s[j];
      }
      c[i] = temp;
      for(int j = i + 1; j <= size; ++j) {
        c[j] = s[j - 1];
      }
      if(is_palindrome(c, size + 1)) {
        for(int i = 0; i < size + 1; ++i) {
          std::cout << c[i];
        }
        std::cout << "\n";
        return 0;
      }
    }
  }
  std::cout << "NA\n";
}
