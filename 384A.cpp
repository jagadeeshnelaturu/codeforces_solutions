#include <iostream>

void oddline(int n) {
  for(int i = 0; i < n / 2; ++i) {
    std::cout << "C.";
  }
  std::cout << ((n % 2 == 1) ? "C" : "") << '\n';
}

void evenline(int n) {
  for(int i = 0; i < n / 2; ++i) {
    std::cout << ".C";
  }
  std::cout << ((n % 2 == 1) ? "." : "") << '\n';  
}

int main() {
  int n;
  std::cin >> n;
  std::cout << (int)((n * n + 1) / 2) << '\n';
  for(int i = 0; i < n; ++i) {
    ((i % 2 == 0) ? oddline(n) : evenline(n));
  }
}
