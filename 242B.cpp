#include <iostream>

inline bool covers(int l1, int r1, int l2, int r2) {
  return ((l1 <= l2) && (r1 >= r2));
}

int main() {
  std::ios::sync_with_stdio(false);
  int n;
  std::cin >> n;
  int *left = new int[n], *right = new int[n], maxlength = -1, maxindex = -1;
  for(int i = 0; i < n; ++i) {
    std::cin >> left[i] >> right[i];
    if(right[i] - left[i] > maxlength) {
      maxindex = i;
      maxlength = right[i] - left[i];
    }
  }
  int l = left[maxindex], r = right[maxindex];
  for(int i = 0; i < n; ++i) {
    if(!covers(l, r, left[i], right[i])) {
      std::cout << "-1\n";
      return 0;
    }
  }
  std::cout << maxindex + 1 << '\n';
}
