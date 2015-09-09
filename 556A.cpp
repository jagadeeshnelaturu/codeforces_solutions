#include <iostream>
#include <cmath>

int main() {
  int n;
  std::cin >> n;
  int numOnes = 0, numZeros = 0;
  char temp;
  while(n--) {
    std::cin >> temp;
    if(temp == '0') ++numZeros;
    else if(temp == '1') ++numOnes;
  }
  std::cout << std::abs(numOnes - numZeros) << '\n';
}
