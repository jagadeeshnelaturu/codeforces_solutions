#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int* values = new int[n];
  int numberOfOnes = 0, temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    if(temp == 0) {
      values[i] = 1;
    }
    else if(temp == 1) {
      values[i] = -1;
      ++numberOfOnes;
    }
  }
  if(numberOfOnes == n) {
    std::cout << n - 1 << '\n';
    return 0;
  }
  int max_ending_here = 0, max_so_far = 0;
  for(int i = 0; i < n; ++i) {
    max_ending_here = std::max(0, max_ending_here + values[i]);
    max_so_far = std::max(max_so_far, max_ending_here);
  }
  std::cout << numberOfOnes + max_so_far << '\n';
}
