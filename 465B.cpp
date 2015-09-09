#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int input, count = 0;
  bool open = false, closed = false;;
  while(n--) {
    std::cin >> input;
    if(input == 0) {
      if(open) {
        ++count;
        open = false;
        closed = true;
      }
    }
    else if(input == 1) {
      if(open) {
        ++count;
      }
      else {
        open = true;
        closed = false;
        ++count;
      }
    }
  }
  std::cout << count - (closed ? 1 : 0) << '\n';
}
