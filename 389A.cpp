#include <iostream>

int result(int a, int b) {
  int temp;
  while((a != b) && (b != 0)){
    temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

int main() {
  int n;
  std::cin >> n;
  int val;
  std::cin >> val;
  int ans = val;
  for(int i = 1; i < n; ++i) {
    std::cin >> val;
    ans = result(ans, val);
  }
  std::cout << ans * n << '\n';
}
