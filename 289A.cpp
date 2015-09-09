#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;
  long long int temp1, temp2, sum = 0;
  while(n--) {
    std::cin >> temp1 >> temp2;
    sum += temp2 - temp1 + 1;
  }
  std::cout << ((sum % k) ? k - sum % k : 0) << '\n'; 
}
