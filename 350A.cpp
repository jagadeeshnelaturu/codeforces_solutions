#include <iostream>
#include <climits>

int main() {
  int n, m;
  std::cin >> n >> m;
  int minCorrect = INT_MAX, maxCorrect = INT_MIN, minWrong = INT_MAX, temp;
  while(n--) {
    std::cin >> temp;
    minCorrect = std::min(minCorrect, temp);
    maxCorrect = std::max(maxCorrect, temp);
  }
  while(m--) {
    std::cin >> temp;
    minWrong = std::min(minWrong, temp);
  }
  int t = std::max((minCorrect << 1), maxCorrect);
  std::cout << ((t < minWrong) ? t : -1) << '\n';
}
