#include <iostream>
#include <vector>

int main() {
  int n, limit;
  std::cin >> n >> limit;
  int day, daycount;
  std::vector<int> v;
  while(n--) {
    std::cin >> day >> daycount;
    if(day > v.size()) v.resize(day);
    v[day - 1] += daycount;
  }
  int size = v.size(), count = 0, capacity, temp;
  for(int i = 0; i <= size; ++i) {
    capacity = limit;
    if(i && v[i - 1]) {
      temp = std::min(v[i - 1], capacity);
      count += temp;
      capacity -= temp;
    }
    if((i != size) && capacity) {
      temp = std::min(v[i], capacity);
      count += temp;
      v[i] -= temp;
    }
  }
  std::cout << count << '\n';
}
