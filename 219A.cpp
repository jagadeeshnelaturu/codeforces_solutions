#include <iostream>

#define NUM_ALPHABETS 26

int main() {
  int counts[NUM_ALPHABETS] = {0};
  int k;
  std::string s;
  std::cin >> k >> s;
  for(std::string::iterator it = s.begin(); it != s.end(); ++it) {
    ++counts[*it - 'a'];
  }
  for(int i = 0; i < NUM_ALPHABETS; ++i) {
    if(counts[i] % k) {
      std::cout << "-1\n";
      return 0;
    }
  }
  for(int i = 0; i < k; ++i) {
    for(int j = 0; j < NUM_ALPHABETS; ++j) {
      for(int j1 = 0; j1 < counts[j] / k; ++j1) {
        std::cout << (char) (j + 'a');
      }
    }
  }
  std::cout << '\n';
}
