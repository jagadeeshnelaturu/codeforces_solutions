#include <iostream>

int main() {
  int n;
  std::cin >> n;
  if((n == 1) || (n == 2)) {
    std::cout << n << '\n';
    return 0;
  }
  int prev2, prev1;
  std::cin >> prev2 >> prev1;
  int lengthTillNow = 2, maxLength = 2, temp;
  for(int i = 0; i < n - 2; ++i) {
    std::cin >> temp;
    if(prev2 + prev1 == temp) {
      ++lengthTillNow;
    }
    else {
      maxLength = std::max(maxLength, lengthTillNow);
      lengthTillNow = 2; 
    }
    prev2 = prev1;
    prev1 = temp;
  }
  maxLength = std::max(maxLength, lengthTillNow);
  std::cout << maxLength << '\n';
}
