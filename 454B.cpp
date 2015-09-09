#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int temp, prev, maxindex = n, firstval;
  bool maxReached = false;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    if(i == 0) {
      prev = temp;
      firstval = temp;
    }
    else if(!maxReached && (temp >= prev)) {
      prev = temp;
    }
    else if(!maxReached && (temp <= firstval)) {
      maxReached = true;
      maxindex = i;
      prev = temp;
    }
    else if(!maxReached) {
      std::cout << "-1\n";
      return 0;
    }
    else if(maxReached && (temp >= prev) && (temp <= firstval)) {
      prev = temp;
    }
    else if(maxReached) {
      std::cout << "-1\n";
      return 0;
    }
  }
  std::cout << n - maxindex << '\n';
}
