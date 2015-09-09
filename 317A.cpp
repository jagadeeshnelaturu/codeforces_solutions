#include <iostream>
#include <cmath>

typedef long long int ll;

int main() {
  ll x, y, m;
  std::cin >> x >> y >> m;
  if(x >= y) x ^= y ^= x ^= y;
  ll count = 0;
  if(y >= m) {
    std::cout << "0\n";
  }
  else if(y <= 0) {
    std::cout << "-1\n";
  }
  else {
    if(x <= 0) {
      count = ((-x) / y) + 1;
      x += count * y;
    }
    ll temp1 = 0, temp2 = 1, temp;
    while(temp1 * x + temp2 * y < m) {
      temp = temp1;
      temp1 = temp2;
      temp2 += temp;
      ++count;
    }
    std::cout << count << '\n';
  }
}
