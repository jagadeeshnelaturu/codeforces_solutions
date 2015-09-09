#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  int numBuses = 0, tempSum = 0, temp;
  while(n--) {
    std::cin >> temp;
    if(tempSum + temp <= m) tempSum += temp;
    else {
      ++numBuses;
      tempSum = temp;
    }
  }
  if(temp != 0) ++numBuses;
  std::cout << numBuses << '\n';
}
