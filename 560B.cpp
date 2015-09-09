#include <iostream>

bool possible(int a1, int b1, int a2, int b2, int a3, int b3) {
  return (((a2 + a3 <= a1) && (b2 <= b1) && (b3 <= b1)) ||
          ((a2 <= a1) && (a3 <= a1) && (b2 + b3 <= b1)));
}

int main() {
  int a1, b1, a2, b2, a3, b3;
  std::cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
  if(possible(a1, b1, a2, b2, a3, b3) ||
     possible(a1, b1, b2, a2, a3, b3) ||
     possible(a1, b1, a2, b2, b3, a3) ||
     possible(a1, b1, b2, a2, b3, a3)) std::cout << "YES\n";
  else std::cout << "NO\n";
}
