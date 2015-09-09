#include <iostream>

#define MODULO 1000000007

int main() {
  int x, y, n, result;
  std::cin >> x >> y >> n;
  n %= 6;
  switch(n) {
   case 0:
    result = x - y;
    break;
   case 1:
    result = x;
    break;
   case 2:
    result = y;
    break;
   case 3:
    result = -x + y;
    break;
   case 4:
    result = -x;
    break;
   case 5:
    result = -y;
    break;
  }
  std::cout << ((result % MODULO) + MODULO) % MODULO << '\n'; 
}
