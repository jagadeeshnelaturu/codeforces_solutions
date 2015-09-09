#include <iostream>

int main() {
  long long int n, m;
  std::cin >> n >> m;
  long long int k_min, k_max;
  k_max = ((n - m) * (n - m + 1)) / 2; // m - 1 groups have one partcicipant each, 1 group has n - m + 1
  k_min = (n % m) * (((n / m + 1) * (n / m)) / 2) + (m - n % m) * (((n / m) * (n / m - 1)) / 2); // distribute (almost) equally
  std::cout << k_min << " " << k_max << '\n';
}
