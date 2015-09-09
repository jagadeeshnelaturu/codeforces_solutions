#include <iostream>
#include <cmath>
#include <sstream>

std::string line(int i, int n) {
  std::string ret = "";
  for(int j = 0; j < 2 * (n - i); ++j) {
    ret += " ";
  }
  if(i != 0) {
    for(int j = 0; j <= i; ++j) {
      char c = '0' + j;
      ret += c;
      ret += " ";
    }
    for(int j = i - 1; j > 0; --j) {
      char c = '0' + j;
      ret += c;
      ret += " ";
    }
  }
  ret += "0";
  return ret;
}

int main() {
  int n;
  std::cin >> n;
  for(int i = 0; i <= n; ++i) {
    std::cout << line(i, n) << '\n';
  }
  for(int i = n - 1; i >= 0; --i) {
    std::cout << line(i, n) << '\n';
  }
}
