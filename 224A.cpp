#include <iostream>
#include <cmath>

typedef long long int ll;

int main() {
  ll a1, a2, a3;
  std::cin >> a1 >> a2 >> a3;
  ll x, y, z, product;
  product = sqrt(a1 * a2 * a3);
  x = product / a1;
  y = product / a2;
  z = product / a3;
  std::cout << ((x + y + z) << 2) << '\n';
}
