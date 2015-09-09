#include <iostream>

typedef long long int ll;

int main() {
  int n;
  std::cin >> n;
  int *positions = new int[n];
  int temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    positions[temp - 1] = i;
  }
  int m;
  std::cin >> m;
  ll count1 = 0, count2 = 0;
  while(m--) {
    std::cin >> temp;
    count1 += positions[temp - 1] + 1;
    count2 += n - positions[temp - 1];
  }
  std::cout << count1 << ' ' << count2 << '\n';
}
