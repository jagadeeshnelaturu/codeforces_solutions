#include <iostream>

bool possible(int n, int l, int r) {
  if(l == r) return (!(n % l));
  int quotient = n / l, remainder = n % l;
  int sum = 0, divisor = r - l, dividend = remainder;
  while(dividend * divisor != 0) {
    if(divisor > dividend) divisor = dividend;
    sum += dividend / divisor;
    dividend %= divisor;
    --divisor;
    if(sum > quotient) return false;
  }
  //return (quotient >= sum);
  return true;
}

int main() {
  int t;
  std::cin >> t;
  int n, l, r;
  while(t--) {
    std::cin >> n >> l >> r;
    std::cout << (possible(n, l, r) ? "Yes" : "No") << '\n';
  }
}
