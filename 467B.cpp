#include <iostream>

bool friends(int a, int b, int k) {
  int c = a ^ b, count = 0;
  while(c > 0) {
    if(c % 2 == 1) ++count;
    c /= 2;
  }
  return (count <= k);
}

int main() {
  int n, m, k;
  std::cin >> n >> m >> k;
  int* values = new int[m + 1];
  for(int i = 0; i <= m; ++i) {
    std::cin >> values[i];
  }
  int count = 0;
  for(int i = 0; i < m; ++i) {
    if(friends(values[i], values[m], k)) ++count;
  }
  std::cout << count << '\n';
}
