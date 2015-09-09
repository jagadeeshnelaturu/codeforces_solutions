#include <iostream>

#define ALPHABET_COUNT 26

int main() {
  std::string s;
  int k;
  std::cin >> s >> k;
  int values[ALPHABET_COUNT], max = 0;
  for(int i = 0; i < ALPHABET_COUNT; ++i) {
    std::cin >> values[i];
    max = std::max(max, values[i]);
  }
  long long int size = s.size(), sum = max * k * (2 * size + k + 1) / 2;
  for(long long int i = 0; i < size; ++i) {
    sum += values[s[i] - 'a'] * (i + 1);
  }
  std::cout << sum << '\n';
}
