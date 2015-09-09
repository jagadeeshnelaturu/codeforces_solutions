#include <iostream>

#define NUM_STRIPS 4

int main() {
  long long int calories[NUM_STRIPS], counts[NUM_STRIPS] = {0};
  for(int i = 0; i < NUM_STRIPS; ++i) {
    std::cin >> calories[i];
  }
  char c;
  while(std::cin >> c) {
    ++counts[c - '1'];
  }
  long long int sum = 0;
  for(int i = 0; i < NUM_STRIPS; ++i) {
    sum += calories[i] * counts[i];
  }
  std::cout << sum << '\n';
}
