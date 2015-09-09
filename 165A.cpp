#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int *x = new int[n], *y = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> x[i] >> y[i];
  }
  int count = 0;
  bool left, right, upper, lower;
  for(int i = 0; i < n; ++i) {
    left = false;
    right = false;
    upper = false;
    lower = false;
    for(int j = 0; j < n; ++j) {
      if(x[j] == x[i]) {
        if(y[j] > y[i]) upper = true;
        else if(y[j] < y[i]) lower = true;
      }
      else if(y[j] == y[i]) {
        if(x[j] > x[i]) right = true;
        else if(x[j] < x[i]) left = true;
      }
    }
    if(left && right && upper && lower) ++count;
  }
  std::cout << count << '\n';
}
