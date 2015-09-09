#include <iostream>

#define MIN1 -2000000000
#define MAX1 2000000000

int main() {
  int low = MIN1, high = MAX1;
  int n;
  std::cin >> n;
  std::string sign;
  int value;
  char answer;
  while(n--) {
    std::cin >> sign >> value >> answer;
    if(sign == ">") {
      switch(answer) {
       case 'Y':
        low = std::max(low, value + 1);
        break;
       case 'N':
        high = std::min(high, value);
        break;
      }
    }
    else if(sign == "<") {
      switch(answer) {
       case 'Y':
        high = std::min(high, value - 1);
        break;
       case 'N':
        low = std::max(low, value);
        break;
      }
    }
    else if(sign == ">=") {
      switch(answer) {
       case 'Y':
        low = std::max(low, value);
        break;
       case 'N':
        high = std::min(high, value - 1);
        break;
      }
    }
    else if(sign == "<=") {
      switch(answer) {
       case 'Y':
        high = std::min(high, value);
        break;
       case 'N':
        low = std::max(low, value + 1);
        break;
      }
    }
  }
  if(low > high) std::cout << "Impossible\n";
  else std::cout << low << '\n';
}
