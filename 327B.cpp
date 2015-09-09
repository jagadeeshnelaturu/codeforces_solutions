#include <iostream>

#define INT_MAX 10000000

int main() {
  int n;
  std::cin >> n;
  bool *isprime = new bool[INT_MAX - 1]; // 2 to INT_MAX
  for(int i = 0; i < INT_MAX - 1; ++i) {
    isprime[i] = true;
  }
  for(int i = 0; i < INT_MAX - 1; ++i) {
    if(!isprime[i]) continue;
    int k = 2;
    while((i + 2) * k <= INT_MAX) {
      isprime[(i + 2) * k - 2] = false;
      ++k;
    }
  }
  int count = 0, index = 0;
  while(true) {
    if(count == n) break;
    if(isprime[index]) {
      std::cout << index + 2 << " ";
      ++count;
    }
    ++index;
  }
  std::cout << '\n';
}
