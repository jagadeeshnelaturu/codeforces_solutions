#include <iostream>
#include <cmath>

int main() {
  int n;
  std::cin >> n;
  char* original = new char[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> original[i];
  }
  char temp;
  int val, count = 0;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    val = std::abs(temp - original[i]);
    count += std::min(val, 10 - val);
  }
  std::cout << count << '\n';
}
