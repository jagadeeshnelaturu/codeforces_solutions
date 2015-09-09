#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int max, min, maxPos, minPos;
  int temp;
  std::cin >> temp;
  max = temp;
  min = temp;
  maxPos = 0;
  minPos = 0;
  for(int i = 1; i < n; ++i) {
    std::cin >> temp;
    if(temp > max) {
      max = temp;
      maxPos = i;
    }
    if(temp <= min) {
      min = temp;
      minPos = i;
    }
  }
  int numSwaps = maxPos + n - 1 - minPos - (minPos < maxPos);
  std::cout << numSwaps << '\n';
}
