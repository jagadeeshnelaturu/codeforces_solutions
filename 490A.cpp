#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> p1, p2, p3;
  int temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    switch(temp) {
     case 1:
      p1.push_back(i + 1);
      break;
     case 2:
      p2.push_back(i + 1);
      break;
     case 3:
      p3.push_back(i + 1);
      break;
    }
  }
  int min = std::min(p1.size(), std::min(p2.size(), p3.size()));
  std::cout << min << '\n';
  for(int i = 0; i < min; ++i) {
    std::cout << p1[i] << " " << p2[i] << " " << p3[i] << '\n';
  }
}
