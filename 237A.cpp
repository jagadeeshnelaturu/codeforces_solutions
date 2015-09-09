#include <iostream>

int main() {
  int n, count = 1, countmax = 1, h, m, hPrev, mPrev;
  std::cin >> n >> hPrev >> mPrev;
  for(int i = 1; i < n; ++i) {
    std::cin >> h >> m;
    if((h == hPrev) && (m == mPrev)) {
      ++count;
      countmax = std::max(count, countmax);
    }
    else {
      hPrev = h;
      mPrev = m;
      count = 1;
    }
  }
  std::cout << countmax << '\n';
}
