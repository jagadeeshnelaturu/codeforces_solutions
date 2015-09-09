#include <iostream>

int main() {
  int n, x;
  std::cin >> n >> x;
  int currentMinute = 1, minutesWatched = 0, l, r;
  while(n--) {
    std::cin >> l >> r;
    currentMinute += ((l - currentMinute) / x) * x;
    minutesWatched += r - currentMinute + 1;
    currentMinute = r + 1;
  }
  std::cout << minutesWatched << '\n';
}
