#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  int output;
  if(n & 1) {
    output = m + ((m >= ((n + 1) >> 1)) ? -1 : 1);
  }
  else {
    output = m + ((m > (n >> 1)) ? -1 : 1);
  }
  if(output < 1) output = 1;
  else if(output > n) output = n;
  std::cout << output << '\n';
}
