#include <iostream>

int possibilities(char c) {
  int count;
  switch(c) {
   case '0':
    count = 2;
    break;
   case '1':
    count = 7;
    break;
   case '2':
    count = 2;
    break;
   case '3':
    count = 3;
    break;
   case '4':
    count = 3;
    break;
   case '5':
    count = 4;
    break;
   case '6':
    count = 2;
    break;
   case '7':
    count = 5;
    break;
   case '8':
    count = 1;
    break;
   case '9':
    count = 2;
    break;
  }
  return count;
}

int main() {
  char c1, c2;
  std::cin >> c1 >> c2;
  std::cout << possibilities(c1) * possibilities(c2) << '\n';
}
