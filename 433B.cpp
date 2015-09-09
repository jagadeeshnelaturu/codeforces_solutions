#include <iostream>
#include <algorithm>
#include <vector>

typedef long long int ll;

int main() {
  int n;
  std::cin >> n;
  std::vector<int> inputs(n), sortedInputs(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> inputs[i];
    sortedInputs[i] = inputs[i];
  }
  std::sort(sortedInputs.begin(), sortedInputs.end());
  ll *prefixSums = new ll[n], *sortedPrefixSums = new ll[n];
  prefixSums[0] = inputs[0];
  sortedPrefixSums[0] = sortedInputs[0];
  for(int i = 1; i < n; ++i) {
    prefixSums[i] = prefixSums[i - 1] + inputs[i];
    sortedPrefixSums[i] = sortedPrefixSums[i - 1] + sortedInputs[i];
  }
  int m;
  std::cin >> m;
  int temp1, temp2, temp3;
  while(m--) {
    std::cin >> temp1 >> temp2 >> temp3;
    switch(temp1) {
     case 1:
      std::cout << prefixSums[temp3 - 1] - ((temp2 != 1) ? prefixSums[temp2 - 2] : 0) << '\n';
      break;
     case 2:
      std::cout << sortedPrefixSums[temp3 - 1] - ((temp2 != 1) ? sortedPrefixSums[temp2 - 2] : 0) << '\n';
      break;
    }
  }
}
