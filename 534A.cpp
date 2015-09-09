#include <iostream>

void print(int n) {
  for(int i = 0; i < n / 2; ++i) {
    std::cout << i + 1 << " " << (n / 2) + i + 1 + (n % 2) << " ";
  }
  if(n % 2 == 1) {
    std::cout << (n / 2) + 1;
  }
  std::cout << '\n';
}

int main() {
  int n;
  std::cin >> n;
  switch(n) {
   case 1:
   case 2:
    std::cout << "1\n1\n";
    break;
   case 3:
    std::cout << "2\n1 3\n";
    break;
   case 4:
    std::cout << "4\n3 1 4 2\n";
    break;
   default:
    std::cout << n << '\n';
    print(n);
    break;
  }
}
