#include <iostream>

// required to find N(n, k) - N(n, d -1) where N(a, b) is the total no. of paths(without edge-weight constraint)

#define MODULUS 1000000007

int num_ways(int n, int k) {
  int* values = new int[n + 1];
  for(int i = 0; i <= n; ++i) {
    if(i == 0) {
      values[i] = 1;
    }
    else if(i < k) {
      int sum = 0;
      for(int j = 0; j < i; ++j) {
        sum = (sum + values[j]) % MODULUS;
      }
      values[i] = sum;
    }
    else if(i >= k) {
      int sum = 0;
      for(int j = 1; j <= k; ++j) {
        sum = (sum + values[i - j]) % MODULUS;
      }
      values[i] = sum;
    }
  }
  return values[n];
}

int main() {
  int n, k, d;
  std::cin >> n >> k >> d;
  int result = (num_ways(n, k) - num_ways(n, d - 1)) % MODULUS;
  result += ((result < 0) ? MODULUS : 0);
  std::cout << result << '\n';
}
