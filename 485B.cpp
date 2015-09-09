#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int minX, minY, maxX, maxY, temp1, temp2;
  std::cin >> temp1 >> temp2;
  minX = temp1;
  maxX = temp1;
  minY = temp2;
  maxY = temp2;
  for(int i = 0; i < n - 1; ++i) {
    std::cin >> temp1 >> temp2;
    minX = std::min(temp1, minX);
    maxX = std::max(temp1, maxX);
    minY = std::min(temp2, minY);
    maxY = std::max(temp2, maxY);
  }
  long long int sidelength = std::max(maxX - minX, maxY - minY), area = sidelength * sidelength;
  std::cout << area << '\n';
}
