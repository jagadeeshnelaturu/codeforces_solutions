#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int* values = new int[n];
  int* prefixSums = new int[n];
  int sum = 0;
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
    prefixSums[i] = values[i] + ((i == 0) ? 0 : prefixSums[i - 1]);
  }
  int s, t;
  std::cin >> s >> t;
  if(s > t) {
    s ^= t ^= s ^= t;
  } // here, s <= t
  if(t == 1) { // implies s == t == 1
    std::cout << "0\n";
  }
  else {
    int ck = prefixSums[t - 2] - ((s == 1) ? 0 : prefixSums[s - 2]);
    int cck = prefixSums[n - 1] - ck;
    std::cout << std::min(ck, cck) << '\n';
  }
}
