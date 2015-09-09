#include <iostream>

int gcd(int a, int b) {
  int temp;
  while(b) {
    temp = a;
    a = b;
    b = temp % b;
  }
  return a;
}

bool power23(int n) {
  while(!(n % 2)) {
    n >>= 1;
  }
  while(!(n % 3)) {
    n /= 3;
  }
  return (n == 1);
}

int main() {
  std::ios::sync_with_stdio(false);
  int n;
  std::cin >> n;
  int *vals = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> vals[i];
  }
  int my_gcd = vals[0];
  for(int i = 1; i < n; ++i) {
    my_gcd = gcd(my_gcd, vals[i]);
  }
  for(int i = 0; i < n; ++i) {
    if(!power23(vals[i] / my_gcd)) {
      std::cout << "No\n";
      return 0;
    }
  }
  std::cout << "Yes\n";
}
