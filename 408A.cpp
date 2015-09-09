#include <iostream>

#define SCAN_TIME 5
#define CASH_TIME 15

int main() {
  int n;
  std::cin >> n;
  int* counts = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> counts[i];
  }
  int currentTime, items, minTime;
  for(int i = 0; i < n; ++i) {
    currentTime = 0;
    for(int j = 0; j < counts[i]; ++j) {
      std::cin >> items;
      currentTime += items * SCAN_TIME + CASH_TIME;
    }
    if(i == 0) minTime = currentTime;
    else minTime = std::min(currentTime, minTime);
  }
  std::cout << minTime << '\n';
}
