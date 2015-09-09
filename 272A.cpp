#include <iostream>

#define NUM_FINGERS 5

int main() {
  int n;
  std::cin >> n;
  int sum = 0, temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    sum += temp;
  }
  int count = 0;
  for(int i = 1; i <= NUM_FINGERS; ++i) {
    if((i + sum) % (n + 1) != 1) ++count;
  }
  std::cout << count << '\n';
}
