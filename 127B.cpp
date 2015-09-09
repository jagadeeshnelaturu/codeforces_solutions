#include <iostream>

#define MAX_LENGTH 100

int main() {
  int counts[MAX_LENGTH] = {0};
  int n, temp;
  std::cin >> n;
  while(n--) {
    std::cin >> temp;
    ++counts[temp - 1];
  }
  int even = 0;
  for(int i = 0; i < MAX_LENGTH; ++i) {
    even += (counts[i] >> 1);
  }
  std::cout << (even >> 1) << '\n';
}
