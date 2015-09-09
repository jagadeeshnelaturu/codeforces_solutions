#include <iostream>

inline int positive_modulus(int i, int n) {
  return ((i % n) + n) % n;
}

int main() {
  int n;
  std::cin >> n;
  int start;
  std::cin >> start;
  int temp;
  for(int i = 1; i < n; ++i) {
    std::cin >> temp;
    temp += start * ((i & 1) ? 1 : -1);
    if(positive_modulus(temp, n) != i) {
      std::cout << "No\n";
      return 0;
    }
  }
  std::cout << "Yes\n";
}
