#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int temp, min1, min2;
  bool found1 = false, found2 = false;
  while(n--) {
    std::cin >> temp;
    if(!found1) {
      min1 = temp;
      found1 = true;
    }
    else if(!found2) {
      if(temp == min1) continue;
      if(temp > min1) min2 = temp;
      else {
        min2 = min1;
        min1 = temp;
      }
      found2 = true;
    }
    else {
      if((temp == min1) || (temp == min2)) continue;
      if(temp < min1) {
        min2 = min1;
        min1 = temp;
      }
      else if(temp < min2) {
        min2 = temp;
      }
    }
  }
  if(found2) std::cout << min2 << '\n';
  else std::cout << "NO\n";
}
