#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int evencount = 0, oddcount = 0, temp;
  while(n--) {
    std::cin >> temp;
    if(temp & 1) ++oddcount;
    else ++evencount;
  }
  if(oddcount & 1) std::cout << oddcount <<'\n';
  else std::cout << evencount << '\n';
}
