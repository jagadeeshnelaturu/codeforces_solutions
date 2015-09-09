#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n, m;
  std::cin >> n >> m;
  std::vector<int> inputs(m);
  for(int i = 0; i < m; ++i) {
    std::cin >> inputs[i];
  }
  std::sort(inputs.begin(), inputs.end());
  if(!inputs.empty() && ((inputs[0] == 1) || (inputs[m - 1] == n))) {
    std::cout << "NO\n";
  }
  else {
    for(int i = 0; i < m - 2; ++i) {
      if((inputs[i + 1] - inputs[i] == 1) && (inputs[i + 2] - inputs[i + 1] == 1)) {
        std::cout << "NO\n";
        return 0;
      }
    }
    std::cout << "YES\n";
  }
}
