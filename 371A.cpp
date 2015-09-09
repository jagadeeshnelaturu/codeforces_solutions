#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;
  char** inputs = new char*[n / k];
  for(int i = 0; i < n / k; ++i) {
    inputs[i] = new char[k];
    for(int j = 0; j < k; ++j) {
      std::cin >> inputs[i][j];
    }
  }
  int count = 0, counts1, counts2;
  for(int i = 0; i < k; ++i) {
    counts1 = 0;
    counts2 = 0;
    for(int j = 0; j < n / k; ++j) {
      if(inputs[j][i] == '1') ++counts1;
      else if(inputs[j][i] == '2') ++counts2;
    }
    count += std::min(counts1, counts2);
  }
  std::cout << count << '\n';
}
