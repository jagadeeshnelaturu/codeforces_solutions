#include <iostream>

int main() {
  long long int n,m,a;
  std::cin >> n >> m >> a;
  long long int x1=((n-1)/a + 1), x2=((m-1)/a + 1);
  std::cout << x1*x2 << '\n'; 
}
