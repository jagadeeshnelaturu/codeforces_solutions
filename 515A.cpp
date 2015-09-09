#include <iostream>
#include <cmath>

int main() {
  long long int a, b, s;
  std::cin >> a >> b >> s;
  long long int temp = s - std::abs(a) - std::abs(b);
  if((temp < 0) || (temp % 2 != 0)) {
    std::cout << "No\n";
  }
  else {
    std::cout << "Yes\n";
  }
}
