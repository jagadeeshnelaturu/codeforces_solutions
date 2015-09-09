#include <iostream>

int main() {
  int a1, a2, a3, b1, b2, b3, n;
  std::cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
  int forCups = (a1 + a2 + a3 + 4) / 5;
  int forMedals = (b1 + b2 + b3 + 9) / 10;
  if(forCups + forMedals <= n) std::cout << "YES\n";
  else std::cout << "NO\n";
}
