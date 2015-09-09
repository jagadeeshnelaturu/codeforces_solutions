#include <iostream>

int main() {
  char c;
  bool digit = false, lower = false, upper = false;
  int count = 0;
  while(std::cin >> c) {
    if((c >= '0') && (c <= '9')) digit = true;
    else if((c >= 'a') && (c <= 'z')) lower = true;
    else if((c >= 'A') && (c <= 'Z')) upper = true;
    ++count;
  }
  if((count >= 5) && digit && lower && upper) std::cout << "Correct\n";
  else std::cout << "Too weak\n";
}
