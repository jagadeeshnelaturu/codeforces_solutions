#include <iostream>

typedef long long int ll;

int main() {
  int n, k;
  std::cin >> n >> k;
  int *values = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
  }
  ll *ksums = new ll[n - k + 1];
  ksums[0] = 0;
  for(int i = 0; i < k; ++i) {
    ksums[0] += values[i];
  }
  for(int i = 1; i < n - k + 1; ++i) {
    ksums[i] = ksums[i - 1] + values[i + k - 1] - values[i - 1];
  }
  ll *maxsuffixes = new ll[n - (k << 1) + 1];
  maxsuffixes[n - (k << 1)] = ksums[n - k];
  for(int i = n - (k << 1) - 1; i >= 0; --i) {
    maxsuffixes[i] = std::max(maxsuffixes[i + 1], ksums[i + k]);
  }
  ll maxsum = 0, left = -1;
  for(int i = 0; i <= n - (k << 1); ++i) {
    if(ksums[i] + maxsuffixes[i] > maxsum) {
      maxsum = ksums[i] + maxsuffixes[i];
      left = i;
    }
  }
  for(int i = left + k; i < n - k + 1; ++i) {
    if(ksums[i] == maxsum - ksums[left]) {
      std::cout << left + 1 << " " << i + 1 << '\n';
      return 0;
    }
  }
  
}
