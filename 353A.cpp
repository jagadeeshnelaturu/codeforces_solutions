#include <iostream>

int main() {
  int n;
  std::cin >> n;
  bool upper_even = true, lower_even = true, odd_even_pair = false;
  int temp1, temp2;
  while(n--) {
    std::cin >> temp1 >> temp2;
    if(temp1 % 2) upper_even = !upper_even;
    if(temp2 % 2) lower_even = !lower_even;
    if((temp1 + temp2) % 2) odd_even_pair = true;
  }
  if(upper_even && lower_even) {
    std::cout << "0\n";
  }
  else if(upper_even || lower_even) {
    std::cout << "-1\n";
  }
  else {
    if(odd_even_pair) std::cout << "1\n";
    else std::cout << "-1\n";
  }
}
