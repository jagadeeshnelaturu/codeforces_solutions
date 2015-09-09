#include <iostream>

typedef long long int ll;

ll result(ll n) {
  while(!(n % 3)) {
    n /= 3;
  }
  return (n + 2) / 3;
}

int main() {
  ll n;
  std::cin >> n;
  std::cout << result(n) << '\n';
}
