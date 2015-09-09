#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int temp;
  std::cin >> temp;
  n--;
  long long int min = temp, max = temp, minCount = 1, maxCount = 1;
  while(n--) {
    std::cin >> temp;
    if(temp < min) {
      min = temp;
      minCount = 1;
    }
    else if(temp == min) {
      ++minCount;
    }
    if(temp > max) {
      max = temp;
      maxCount = 1;
    }
    else if(temp == max) {
      ++maxCount;
    }
  }
  if(min != max) {
    std::cout << max - min << " " << minCount * maxCount << '\n';
  }
  else if(min == max) {
    std::cout << "0 " <<  (maxCount * (maxCount - 1)) / 2 << '\n';
  }
}
