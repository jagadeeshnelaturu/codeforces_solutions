#include <iostream>

int main() {
  int n;
  std::cin >> n;
  char left, right, rightmost = '$'; // dummy value of rightmost
  int numGroups = 0;
  for(int i = 0; i < n; ++i) {
    std::cin >> left >> right;
    if((i == 0) || (left == rightmost)) {
      ++numGroups;
      rightmost = right;
    }
  }
  std::cout << numGroups << '\n';
}
