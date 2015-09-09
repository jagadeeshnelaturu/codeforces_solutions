#include <iostream>
#include <vector>
#include <algorithm>

struct gift {
  int giver, receiver;
};

bool operator< (const gift& a, const gift& b) {
  return a.receiver < b.receiver;
}

int main() {
  int n;
  std::cin >> n;
  std::vector<gift> values(n);
  for(int i = 0; i < n; ++i) {
    values[i].giver = i + 1;
    std::cin >> values[i].receiver;
  }
  std::sort(values.begin(), values.end());
  for(int i = 0; i < n; ++i) {
    std::cout << values[i].giver << " ";
  }
  std::cout << '\n';
}
