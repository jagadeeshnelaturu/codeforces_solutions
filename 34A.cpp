#include <iostream>
#include <climits>
#include <cmath>

int main() {
  int n;
  std::cin >> n;
  int *vals = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> vals[i];
  }
  int mindiff = std::abs(vals[n - 1] - vals[0]), minindex = n - 1, tempdiff;
  for(int i = 0; i < n - 1; ++i) {
    tempdiff = std::abs(vals[i + 1] - vals[i]);
    if(tempdiff < mindiff) {
      mindiff = tempdiff;
      minindex = i;
    }
  }
  if(minindex != n - 1) {
    std::cout << minindex + 1 << ' ' << minindex + 2 << '\n';
  }
  else {
    std::cout << 1 << ' ' << n << '\n';
  }
}
