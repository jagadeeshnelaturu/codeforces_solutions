#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;
  int numOps = 0, mi, temp, continuousChain;
  for(int i = 0; i < k; ++i) {
    std::cin >> mi >> temp;
    if(temp == 1) {
      int j = 2;
      while(j <= mi) {
        std::cin >> temp;
        if(temp != j) break;
        ++j;
      }
      continuousChain = j - 1;
      for(j = 0; j < mi - continuousChain - 1; ++j) {
        std::cin >> temp;
      }
      numOps += mi - continuousChain;
    }
    else {
      for(int j = 0; j < mi - 1; ++j) {
        std::cin >> temp;
      }
      numOps += mi - 1;
    }
  }
  numOps += n - continuousChain;
  std::cout << numOps << '\n';
}
