#include <iostream>

int main() {
  int n, v;
  std::cin >> n >> v;
  bool* values = new bool[n];
  int temp1, temp2, count = 0;
  for(int i = 0; i < n; ++i) {
    values[i] = false;
    std::cin >> temp1;
    for(int j = 0; j < temp1; ++j) {
      std::cin >> temp2;
      values[i] = values[i] || (temp2 < v);
    }
    if(values[i]) ++count;
  }
  std::cout << count << '\n';
  for(int i = 0; i < n; ++i) {
    if(values[i]) std::cout << i + 1 << " ";
  }
  std::cout << '\n';
}
