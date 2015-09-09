#include <iostream>

int main() {
  long long int sum1 = 0, sum2 = 0, sum3 = 0;
  int n;
  std::cin >> n;
  int temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    sum1 += temp;
  }
  for(int i = 0; i < n - 1; ++i) {
    std::cin >> temp;
    sum2 += temp;
  }
  for(int i = 0; i < n - 2; ++i) {
    std::cin >> temp;
    sum3 += temp;
  }
  std::cout << sum1 - sum2 << '\n' << sum2 - sum3 << '\n';
}
