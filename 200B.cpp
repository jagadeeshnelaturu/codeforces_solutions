#include <iostream>
#include <cstdio>

int main() {
  int n;
  std::cin >> n;
  int sum = 0, temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    sum += temp;
  }
  printf("%f\n", (double)sum / n);
}
