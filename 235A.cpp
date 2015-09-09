#include <iostream>

int main() {
  long long int n;
  std::cin >> n;
  if((n == 1) || (n == 2)) std::cout << n << '\n';
  else if(n & 1) std::cout << n * (n - 1) * (n - 2) << '\n';
  else if(n % 3)std::cout << n * (n - 1) * (n - 3) << '\n';
  else std::cout << (n - 1)* (n - 2) * (n - 3) << '\n';
}
