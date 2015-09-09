#include <iostream>
#include <vector>

typedef long long int ll;

#define UPPER_BOUND 1000000000
#define MAX_SUM 81

int digit_sum(ll x) {
  int sum = 0;
  while(x != 0) {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}

ll exp(ll a, ll b) {
  ll acc = 1;
  while(b) {
    if(b & 1) {
      acc *= a;
    }
    b >>= 1;
    a *= a;
  }
  return acc;
}

int main() {
  ll a, b, c;
  std::cin >> a >> b >> c;
  std::vector<ll> solutions;
  ll temp;
  for(ll i = 1; i < MAX_SUM; ++i) {
    temp = b * exp(i, a) + c;
    if ((temp > 0) && (digit_sum(temp) == i)  && (temp < UPPER_BOUND)) solutions.push_back(temp);
  }
  std::cout << solutions.size() << '\n';
  if(solutions.size() != 0) {
    for(std::vector<ll>::iterator it = solutions.begin(); it != solutions.end(); ++it) {
      std::cout << *it << " ";
    }
    std::cout << '\n';
  }
}
