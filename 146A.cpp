#include <iostream>

int main() {
  int n;
  std::cin >> n;
  char temp1;
  int temp2, sum[2] = {0};
  for(int i = 0; i < n; ++i) {
    std::cin >> temp1;
    temp2 = temp1 - '0';
    if((temp2 != 4) && (temp2 != 7)) {
      std::cout << "NO\n";
      return 0;
    }
    sum[(2 * i) / n] += temp2;
  }
  std::cout << ((sum[0] == sum[1]) ? "YES" : "NO") << '\n';
}
