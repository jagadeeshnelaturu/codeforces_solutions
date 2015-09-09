#include <iostream>

inline bool divisible8(int n) {
  return (n % 8 == 0);
}

int main() {
  std::string n;
  std::cin >> n;
  int size = n.size(), temp;
  for(int i = 0; i < size; ++i) {
    temp = n[i] - '0';
    if(divisible8(temp)) {
      std::cout << "YES\n" << temp << '\n';
      return 0;
    }
  }
  for(int i = 0; i < size; ++i) {
    for(int j = i + 1; j < size; ++j) {
      temp = 10 * (n[i] - '0') + (n[j] - '0');
      if(divisible8(temp)) {
        std::cout << "YES\n" << temp << '\n';
        return 0;
      }
    }
  }
  for(int i = 0; i < size; ++i) {
    for(int j = i + 1; j < size; ++j) {
      for(int k = j + 1; k < size; ++k) {
        temp = 100 * (n[i] - '0') + 10 * (n[j] - '0') + (n[k] - '0');
        if(divisible8(temp)) {
          std::cout << "YES\n" << temp << '\n';
          return 0;
        }
      }
    }
  }
  std::cout << "NO\n";
}
