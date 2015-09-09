#include <iostream>
#include <vector>
#include <cmath>
#include <map>

typedef long long int ll;

#define MODULO 1000000007

void factorize(int n, std::vector<int>& primes, int* values, std::map<int, int>& newprimes) {
  if(n == 1) return;
  int size = primes.size();
  for(int i = 0; i < size; ++i) {
    while(n % primes[i] == 0) {
      ++values[i];
      n /= primes[i];
    }
    if(n == 1) return;
  }
  if(newprimes.count(n)) {
    ++newprimes[n];
  }
  else {
    newprimes[n] = 1;
  }
}

std::vector<int> findprimes(int n) { //  returns all primes <= n
  bool *isprime = new bool[n - 1];
  for(int i = 0; i < n - 1; ++i) {
    isprime[i] = true;
  }
  int i, j;
  for(i = 2; i <= sqrt(n); ++i) {
    if(!isprime[i - 2]) continue;
    j = 2;
    while(i * j <= n) {
      isprime[i * j - 2] = false;
      ++j;
    }
  }
  std::vector<int> result;
  for(i = 0; i < n - 1; ++i) {
    if(isprime[i]) result.push_back(i + 2);
  }
  return result;
}

ll* tabulatenCr(int n, int r) {
  ll** vals = new ll*[2];
  for(int i = 0; i < 2; ++i) {
    vals[i] = new ll[n + 1];
  }
  for(int i = 0; i <= r; ++i) {
    if(i == 0) {
      for(int j = 0; j <= n; ++j) {
        vals[i & 1][j] = 1;
      }
    }
    else {
      vals[i & 1][0] = 0;
      for(int j = 1; j <= n; ++j) {
        vals[i & 1][j] = (vals[i & 1][j - 1] + vals[(i + 1) & 1][j - 1]) % MODULO;
      }
    }
  }
  return vals[r & 1];
}

int main() {
  int n;
  std::cin >> n;
  int *inputs = new int[n], maxinput = 0;
  for(int i = 0; i < n; ++i) {
    std::cin >> inputs[i];
    maxinput = std::max(maxinput, inputs[i]);
  }
  std::vector<int> primes = findprimes((int) sqrt(maxinput));
  int size = primes.size(), *values = new int[size];
  std::map<int, int> newprimes;
  for(int i = 0; i < size; ++i) {
    values[i] = 0;
  }
  for(int i = 0; i < n; ++i) {
    factorize(inputs[i], primes, values, newprimes);
  }
  int maxindex = 0;
  for(int i = 0; i < size; ++i) {
    maxindex = std::max(maxindex, values[i]);
  }
  for(std::map<int, int>::iterator it = newprimes.begin(); it != newprimes.end(); ++it) {
    maxindex = std::max(maxindex, it->second);
  }
  ll* result = tabulatenCr(n + maxindex - 1, n - 1);
  ll product = 1;
  for(int i = 0; i < size; ++i) {
    if(values[i]) {
      product *= result[n + values[i] - 1];
      product %= MODULO;
    }
  }
  for(std::map<int, int>::iterator it = newprimes.begin(); it != newprimes.end(); ++it) {
    product *= result[n + it->second - 1];
    product %= MODULO;
  }
  std::cout << product << '\n';
}
