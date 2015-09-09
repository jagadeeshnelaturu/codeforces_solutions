#include <iostream>
#include <queue>

int fact(int n) {
  int result = 1;
  while(n) {
    result *= n;
    --n;
  }
  return result;
}

int main() {
  std::ios::sync_with_stdio(false);
  int n;
  std::cin >> n;
  int max = fact(n), k1, k2, temp1, temp2;
  std::queue<int> q1, q2;
  std::cin >> k1;
  for(int i = 0; i < k1; ++i) {
    std::cin >> temp1;
    q1.push(temp1);
  }
  std::cin >> k2;
  for(int i = 0; i < k2; ++i) {
    std::cin >> temp1;
    q2.push(temp1);
  }
  for(int count = 0; count < max; ++count) {
    if(q1.empty()) {
      std::cout << count << ' ' << 2 << '\n';
      return 0;
    }
    else if(q2.empty()) {
      std::cout << count << ' ' << 1 << '\n';
      return 0;
    }
    temp1 = q1.front();
    temp2 = q2.front();
    if(temp1 < temp2) {
      q2.push(temp1);
      q2.push(temp2);
    }
    else if(temp1 > temp2) {
      q1.push(temp2);
      q1.push(temp1);
    }
    q1.pop();
    q2.pop();
  }
  std::cout << -1 << '\n';
}
