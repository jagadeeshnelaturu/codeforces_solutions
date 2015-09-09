#include <iostream>

int num_days(int n, int m) {
  int count = 0;
  while(true) {
    if(n == 0) return count;
    else if((count + 1) % m != 0) --n;
    ++count;
  }
}

int main() {
  int n, m;
  std::cin >> n >> m;
  std::cout << num_days(n, m) << '\n';
}
