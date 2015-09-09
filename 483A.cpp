#include <iostream>

int main() {
  long long int l, r;
  std::cin >> l >> r;
  if(r - l > 2) {
    long long int start = l + (l % 2);
    std::cout << start << " " << start + 1 << " " << start + 2 << '\n';
  }
  else if((r - l == 2) && ((l % 2) == 0)) {
    std::cout << l << " " << l + 1 << " " << l + 2 << '\n';
  }
  else {
    std::cout << "-1\n";
  }
}
