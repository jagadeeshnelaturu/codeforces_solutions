#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> values(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
  }
  std::sort(values.begin(), values.end());

  std::vector<long long int> numbers, counts;
  int current_size = 0;
  for(std::vector<int>::iterator it = values.begin(); it != values.end(); ++it) {
    if((current_size != 0) && (numbers[current_size - 1] == *it)) {
      ++counts[current_size - 1];
    }
    else {
      numbers.push_back(*it);
      counts.push_back(1);
      ++current_size;
    }
  }
  long long int memoized_values[current_size + 1];
  for(int k = current_size; k >= 0; --k) {
    if(k == current_size) memoized_values[k] = 0;
    else if(k == current_size - 1) memoized_values[k] = numbers[k] * counts[k];
    else if(numbers[k + 1] != numbers[k] + 1) memoized_values[k] = numbers[k] * counts[k] + memoized_values[k + 1];
    else if(numbers[k + 1] == numbers[k] + 1) memoized_values[k] = std::max(numbers[k] * counts[k] + memoized_values[k + 2], memoized_values[k + 1]);
  }
  std::cout << memoized_values[0] << '\n';
}
