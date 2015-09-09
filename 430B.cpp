#include <iostream>

int returnCount(int colors[], int n, int k, int pos) {
  if((colors[pos] != k) || (colors[pos + 1] != k)) return 0;
  int count = 2, left = pos - 1, right = pos + 2, temp;
  bool b1, b2;
  while((left >= 0) && (right <= n - 1)) {
    if((colors[left] != colors[right])) break;
    temp = colors[left];
    b1 = (left != 0) && (colors[left - 1] == temp);
    b2 = (right != n - 1) && (colors[right + 1] == temp);
    if(!b1 && !b2) break;
    count += 2;
    if(b1) {
      left -= 2;
      ++count;
    }
    else {
      --left;
    }
    if(b2) {
      right += 2;
      ++count;
    }
    else {
      ++right;
    }
  }
  return count;
}

int main() {
  int n, k, x;
  std::cin >> n >> k >> x;
  int* colors = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> colors[i];
  }
  int maxcount = 0;
  for(int i = 0; i < n - 1; ++i) {
    maxcount = std::max(maxcount, returnCount(colors, n, x, i));
  }
  std::cout << maxcount << '\n';
}
