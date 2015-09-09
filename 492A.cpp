#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int i = 1, partialSum = 0, totalSum = 0;
  while(true) {
    partialSum += i;
    totalSum += partialSum;
    if(totalSum > n) {
      std::cout << i - 1 << '\n';
      return 0;
    }
    ++i;
  }
}
