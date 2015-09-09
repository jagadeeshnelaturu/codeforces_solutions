#include <iostream>
#include <set>

int main() {
  int n;
  std::cin >> n;
  int *values = new int[n + 1];
  std::set<int> people;
  values[0] = 0;
  char c;
  int newcount = 0, temp;
  for(int i = 1; i <= n; ++i) {
    std::cin >> c >> temp;
    if(c == '+') {
      values[i] = values[i - 1] + 1;
      people.insert(temp);
    }
    else {
      values[i] = values[i - 1] - 1;
      if(!people.count(temp)) {
        people.insert(temp);
        ++newcount;
      }
    }
  }
  int max = 0;
  for(int i = 1; i <= n; ++i) {
    max = std::max(max, values[i]);
  }
  std::cout << max + newcount << '\n';
}
