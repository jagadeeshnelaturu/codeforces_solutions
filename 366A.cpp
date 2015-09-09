#include <iostream>

#define COUNT 4

int main() {
  int n;
  std::cin >> n;
  int temp1, temp2, temp3, temp4;
  bool written = false;
  for(int i = 0; i < COUNT; ++i) {
    std::cin >> temp1 >> temp2 >> temp3 >> temp4;
    if(written) continue;
    if(std::min(temp1, temp2) + std::min(temp3, temp4) <= n) {
      std::cout << i + 1 << " " << std::min(temp1, temp2) << " " << n - std::min(temp1, temp2) << '\n';
      written = true;
    }
  }
  if(!written) std::cout << "-1\n";
}
