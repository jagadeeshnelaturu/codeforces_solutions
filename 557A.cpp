#include <iostream>

#define NUM_DIPLOMAS 3

int main() {
  int n;
  std::cin >> n;
  int min_vals[NUM_DIPLOMAS], max_vals[NUM_DIPLOMAS], min_sum = 0, max_sum = 0;
  for(int i = 0; i < NUM_DIPLOMAS; ++i) {
    std::cin >> min_vals[i] >> max_vals[i];
    min_sum += min_vals[i];
    max_sum += max_vals[i];
  }
  int diff = n - min_sum;
  for(int i = 0; i < NUM_DIPLOMAS; ++i) {
    if(max_vals[i] - min_vals[i] <= diff) {
      std::cout << max_vals[i];
      diff -= max_vals[i] - min_vals[i];
    }
    else {
      std::cout << min_vals[i] + diff;
      diff = 0;
    }
    std::cout << ((i == NUM_DIPLOMAS - 1) ? "\n" : " ");
  }
}
