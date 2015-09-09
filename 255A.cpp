#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int counts[3] = {0};
  int temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    counts[i % 3] += temp;
  }
  if(counts[0] < counts[1]) {
    if(counts[1] < counts[2]) std::cout << "back\n";
    else if(counts[1] > counts[2]) std::cout << "biceps\n";
  }
  else if(counts[0] == counts[1]) {
    if(counts[1] < counts[2]) std::cout << "back\n";
  }
  else if(counts[0] > counts[1]) {
    if(counts[0] > counts[2]) std::cout << "chest\n";
    else if(counts[0] < counts[2]) std::cout << "back\n";
  }  
}
