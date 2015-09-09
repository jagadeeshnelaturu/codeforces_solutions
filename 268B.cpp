#include <iostream>

int main() {
  long long int n;
  std::cin >> n;
  long long int m = (n * (n * n + 5)) / 6;
  std::cout << m << '\n';
}
