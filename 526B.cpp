#include <iostream>
#include <cmath>

int main() {
  int n;
  std::cin >> n;
  int exp = pow(2, n);
  int length = 2 * exp - 2;
  int* counts = new int[length];
  for(int i = 0; i < length; ++i) {
    std::cin >> counts[i];
  }
  int* values = new int[exp - 1];
  int count = 0;
  for(int i = (exp / 2) - 1; i < exp - 1; ++i) {
    values[i] = std::max(counts[2 * i], counts[2 * i + 1]);
    count += std::abs(counts[2 * i] - counts[2 * i + 1]);
  }
  for(int i = (exp / 2) - 2; i >= 0; --i) {
    int temp1 = values[2 * i + 1] + counts[2 * i];
    int temp2 = values[2 * i + 2] + counts[2 * i + 1];
    values[i] = std::max(temp1, temp2);
    count += std::abs(temp1 - temp2);
  }
  std::cout << count << '\n';
}
