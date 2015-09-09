#include <iostream>

int max7s(int n) {
  int a = n % 7;
  while(a % 4) {
    a += 7;
    if(a > n) return -1;
  }
  return (n - a) / 7;
}

void printlucky(int a, int b) {
  for(int i = 0; i < b; ++i) {
    std::cout << 4;
  }
  for(int i = 0; i < a; ++i) {
    std::cout << 7;
  }
  std::cout << '\n';
}

int main() {
  int n;
  std::cin >> n;
  int num7s = max7s(n);
  if(num7s == -1) std::cout << "-1\n";
  else printlucky(num7s, (n - 7 * num7s) / 4);
}
