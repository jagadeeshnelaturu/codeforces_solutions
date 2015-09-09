#include <iostream>

int push_count(int n, int m) {
  int temp = m, count = 0;
  while(temp > n) {
    if(temp % 2 == 1) {
      ++temp;
      ++count;
    }
    temp /= 2;
    ++count;
  }
  return count + n -temp;
}

int main() {
  int n,m;
  std::cin >> n >> m;
  std::cout << push_count(n,m) << '\n';
}
