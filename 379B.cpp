#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int *vals = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> vals[i];
  }
  int pos1, pos2, val1, val2;
  for(int i = 0; i < (n >> 1); ++i) {
    pos1 = (i << 1);
    pos2 = pos1 + 1;
    val1 = vals[pos1];
    val2 = vals[pos2];
    if(val1 < val2) {
      for(int j = 0; j < val1; ++j) {
        std::cout << "PRPL";
      }
      for(int j = 0; j < val2 - val1 - 1; ++j) {
        std::cout << "RPL";
      }
      std::cout << ((pos2 == n - 1) ? "RP" : "RPR");
    }
    else if(val1 == val2) {
      for(int j = 0; j < val1 - 1; ++j) {
        std::cout << "PRPL";
      }
      if(val1 != 0) std::cout << ((pos2 == n - 1) ? "PRP" : "PRPR");
      else std::cout << ((pos2 == n - 1) ? "" : "RR");
    }
    else if(val1 > val2) {
      for(int j = 0; j < val2; ++j) {
        std::cout << "PRPL";
      }
      for(int j = 0; j < val1 - val2 - 1; ++j) {
        std::cout << "PRL";
      }
      std::cout << ((pos2 == n - 1) ? "PR" : "PRR");
    }
  }
  if(n & 1) {
    for(int j = 0; j < vals[n - 1]; ++j) {
      std::cout << "PLR";
    }
  }
  std::cout << "\n";
}
