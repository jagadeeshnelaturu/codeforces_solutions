#include <iostream>
#include <cmath>

int main() {
  int n, d;
  std::cin >> n >> d;
  int sum = 0, temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    sum += temp;
  }
  temp = d - sum - (n - 1) * 10;
  if(temp < 0) {
    std::cout << "-1\n";
  }
  else if(temp >= 0) {
    std::cout << 2 * (n - 1) + temp / 5 << '\n';
  }
}
