#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n, m;
  std::cin >> n >> m;
  std::vector<int> seats(m);
  for(int i = 0; i < m; ++i) {
    std::cin >> seats[i];
  }
  std::sort(seats.begin(), seats.end());
  std::vector<int> rseats(m);
  for(int i = 0; i < m; ++i) {
    rseats[i] = seats[m - 1 - i];
  }
  int mincost = 0, maxcost = 0;
  std::vector<int>::iterator it1 = seats.begin(), it2;
  while(n--) {
    it2 = rseats.begin();
    mincost += *it1;
    --(*it1);
    if(!(*it1)) {
      ++it1;
    }
    maxcost += *it2;
    while((it2 != rseats.end()) && (*it2 == rseats[0])) {
      ++it2;
    }
    --it2;
    --(*it2);
  }
  std::cout << maxcost << " " << mincost << '\n';
}
