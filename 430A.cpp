#include <iostream>
#include <vector>
#include <algorithm>

struct node {
  int _index, _position, _value;

  void set(int index, int position) {
    _index = index;
    _position = position;
    _value = -1;
  }

  void setval(int value) {
    _value = value;
  }
};

bool lessThanPos(node n1, node n2) {
  return n1._position < n2._position;
}

bool lessThanIndex(node n1, node n2) {
  return n1._index < n2._index;
}

int main() {
  int n, m;
  std::cin >> n >> m;
  std::vector<node> values(n);
  int temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    values[i].set(i, temp);
  }
  for(int i = 0; i < m; ++i) {
    std::cin >> temp >> temp;
  }
  std::sort(values.begin(), values.end(), lessThanPos);
  for(int i = 0; i < n; ++i) {
    values[i]._value = i & 1;
  }
  std::sort(values.begin(), values.end(), lessThanIndex);
  for(int i = 0; i < n; ++i) {
    std::cout << values[i]._value << ((i != n - 1) ? " " : "\n");
  }
}
