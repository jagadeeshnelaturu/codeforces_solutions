#include <iostream>

int main() {
  int n, bowls, plates;
  std::cin >> n >> bowls >> plates;
  int dish1 = 0, dish2 = 0, temp;
  while(n--) {
    std::cin >> temp;
    if(temp == 1) ++dish1;
    else if(temp == 2) ++dish2;
  }
  int answer;
  if(bowls >= dish1) {
    answer = std::max(0, dish1 + dish2 - bowls - plates);
  }
  else if(bowls < dish1) {
    answer = dish1 - bowls + std::max(0, dish2 - plates);
  }
  std::cout << answer << '\n';
}

