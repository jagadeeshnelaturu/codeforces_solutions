#include <iostream>

#define MODULO 1000000007
#define SIZE 1000001

typedef long long int ll;

ll exp(ll a, ll n) {
  ll result = 1;
  while(n) {
    if(n & 1) result = (result * a) % MODULO;
    n >>= 1;
    a = (a * a) % MODULO;
  }
  return result;
}

int main() {
  ll *facts = new ll[SIZE], *invFacts = new ll[SIZE];
  facts[0] = 1;
  invFacts[0] = 1;
  for(int i = 1; i < SIZE; ++i) {
    facts[i] = (facts[i- 1] * i) % MODULO;
  }
  for(int i = 1; i < SIZE; ++i) {
    invFacts[i] = (invFacts[i - 1] * exp(i, MODULO - 2)) % MODULO;
  }
  int k;
  std::cin >> k;
  ll product = 1, sum = 0, temp1, temp2;
  while(k--) {
    std::cin >> temp1;
    sum = (sum + temp1) % MODULO;
    temp2 = (((facts[sum - 1] * invFacts[temp1 - 1]) % MODULO) * invFacts[sum - temp1]) % MODULO;
    product = (product * temp2) % MODULO;
  }
  std::cout << product << '\n';
}
