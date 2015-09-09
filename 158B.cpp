#include <iostream>

int numTaxis(int counts[]) {
  int count = counts[3]; // no group of 4 is left
  count += counts[1] / 2; // at most 1 group of 2 is left
  count += std::min(counts[0], counts[2]); // at most some groups of 1 or 3 are left
  if(counts[0] <= counts[2]) {
    count += counts[2] - counts[0] + (counts[1] % 2);
  }
  else if(counts[0] > counts[2]) {
    count += ((counts[0] - counts[2] + 3 + (2 * (counts[1] % 2))) / 4);
  }
  return count;
}

int main() {
  int numGroups, counts[4];
  for(int i = 0; i < 4; ++i) {
    counts[i] = 0;
  }
  std::cin >> numGroups;
  int count;
  while(numGroups--) {
    std::cin >> count;
    ++counts[count - 1];
  }
  std::cout << numTaxis(counts) << '\n';
}
