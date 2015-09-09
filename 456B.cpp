#include <iostream>

int main() {
  char c;
  int prev2, prev1;
  bool first = true, second = true;
  while(std::cin >> c) {
    if(first) {
      prev2 = c - '0';
      first = false;
      continue;
    }
    else if(second) {
      second = false;
    }
    else if(!second) {
      prev2 = prev1;
    }
    prev1 = c - '0';
  }
  int remainder4 = (second ? (prev2 % 4) : ((10 * prev2 + prev1) % 4));
  int mod1, mod2, mod3, mod4;
  mod1 = 1;
  switch(remainder4) {
   case 0:
    mod2 = 1;
    mod3 = 1;
    break;
   case 1:
    mod2 = 2;
    mod3 = 3;
    break;
   case 2:
    mod2 = 4;
    mod3 = 4;
    break;
   case 3:
    mod2 = 3;
    mod3 = 2;
    break;
  }
  switch(remainder4) {
   case 0:
   case 2:
    mod4 = 1;
    break;
   case 1:
   case 3:
    mod4 = 4;
  }
  std::cout << (mod1 + mod2 + mod3 + mod4) % 5 << '\n';
}
