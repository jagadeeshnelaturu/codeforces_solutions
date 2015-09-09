#include <iostream>

bool isLucky(int n) {
  if(n < 0) n = -n;
  while(n != 0) {
    if(n % 10 == 8) return true;
    n /= 10;
  }
  return false;
}

int main() {
  int n;
  std::cin >> n;
  int count = 1;
  while(!isLucky(n + count)) ++count;
  std::cout << count << '\n';
}
