#include <iostream>

int main() {
  int n;
  std::cin >> n;
  if(!n) {
    std::cout << "0 0 0\n";
    return 0;
  }
  int f[] = {0, 1}, i = 0;
  while(true) {
    if(f[0] + f[1] == n) {
      std::cout << f[i & 1] << " " << f[i & 1] << " " << f[(i + 1) & 1] - f[i & 1] << '\n';
      return 0;
    }
    f[i & 1] = f[0] + f[1];
    ++i;
  }
}
