#include <iostream>

#define MIN_RATING 1
#define MAX_RATING 2000

int main() {
  int n;
  std::cin >> n;
  int* ratings = new int[n];
  int num_students[MAX_RATING - MIN_RATING + 1] = {0};
  for(int i = 0; i < n; ++i) {
    std::cin >> ratings[i];
    ++num_students[ratings[i] - MIN_RATING];
  }
  int cumulative_students[MAX_RATING - MIN_RATING + 1];
  cumulative_students[MAX_RATING - MIN_RATING] = 0;
  for(int i = MAX_RATING - MIN_RATING - 1; i >= 0; --i) {
    cumulative_students[i] = cumulative_students[i + 1] + num_students[i + 1];
  }
  for(int i = 0; i < n; ++i) {
    std::cout << 1 + cumulative_students[ratings[i] - MIN_RATING] << " ";
  }
  std::cout << '\n';
}
