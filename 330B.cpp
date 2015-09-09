#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  bool* noConstraint = new bool[n];
  for(int i = 0; i < n; ++i) {
    noConstraint[i] = true;
  }
  int temp1, temp2;
  while(m--) {
    std::cin >> temp1 >> temp2;
    noConstraint[temp1 - 1] = false;
    noConstraint[temp2 - 1] = false;
  }
  std::cout << n - 1 << '\n';
  int i;
  for(i = 0; i < n; ++i) {
    if(noConstraint[i]) break;
  }
  for(int j = 0; j < n; ++j) {
    if(j != i) std::cout << j + 1 << " " << i + 1<< '\n';
  }
}
