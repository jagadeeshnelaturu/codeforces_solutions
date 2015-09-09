#include <iostream>
#include <vector>
#include <algorithm>

struct tree {
  int position, count;
};

bool operator<(tree t1, tree t2) {
  return t1.position < t2.position;
}

int main() {
  int n;
  std::cin >> n;
  std::vector<tree> values(n);
  int left_count = 0, right_count = 0;
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i].position >> values[i].count;
    if (values[i].position > 0) ++right_count;
    else ++left_count;
  }
  std::sort(values.begin(), values.end());
  int sum = 0;
  if(left_count < right_count) {
    for(int i = 0; i < 2 * left_count + 1; ++i) {
      sum += values[i].count;
    }
  }
  else if(left_count == right_count) {
    for(int i = 0; i < n; ++i) {
      sum += values[i].count;
    }
  }
  else if(left_count > right_count) {
    for(int i = 0; i < 2 * right_count + 1; ++i) {
      sum += values[n - 1 - i].count;
    }
  }
  std::cout << sum << '\n';
}
