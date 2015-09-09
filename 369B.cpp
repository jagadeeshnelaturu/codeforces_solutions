#include <iostream>

int main() {
  int n, k, l, r, s_n, s_k;
  std::cin >> n >> k >> l >> r >> s_n >> s_k;
  int temp1 = s_k / k, temp3 = s_k - (k - 1) * temp1;
  if(temp3 <= r) {
    for(int i = 0; i < k - 1; ++i) {
      std::cout << temp1 << ' ';
    }
    std::cout << temp3 << ' ';
  }
  else {
    for(int i = 0; i <= (temp3 - r) / (r - temp1); ++i) {
      std::cout << r << ' ';
    }
    std::cout << temp1 + ((temp3 - r) % (r - temp1)) << ' ';
    for(int i = 0; i < k - 2 - ((temp3 - r) / (r - temp1)); ++i) {
      std::cout << temp1 << ' ';
    }
  }
  if(n == k) {
    std::cout << '\n';
    return 0;
  }
  int temp2 = (s_n - s_k) / (n - k), temp4 = s_n - s_k - (n - k - 1) * temp2;
  if(temp4 <= temp1) {
    for(int i = 0; i < n - k - 1; ++i) {
      std::cout << temp2 << ' ';
    }
    std::cout << temp4 << ' ';
  }
  else {
    for(int i = 0; i <= (temp4 - temp1) / (temp1 - temp2); ++i) {
      std::cout << temp1 << ' ';
    }
    std::cout << temp2 + ((temp4 - temp1) % (temp1 - temp2)) << ' ';
    for(int i = 0; i < n - k - 2 - ((temp4 - temp1) / (temp1 - temp2)); ++i) {
      std::cout << temp2 << ' ';
    }
  }
  std::cout << '\n';
}
