#include <iostream>
#include <vector>
#include <algorithm>

#define MAXLENGTH 100000

struct query {
  int _i, _l;
};

bool operator<(query q1, query q2) {
  return q1._l > q2._l;
}

int main() {
  int n, m;
  std::cin >> n >> m;
  int *inputs = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> inputs[i];
  }
  std::vector<query> queries(m);
  int temp;
  for(int i = 0; i < m; ++i) {
    queries[i]._i = i;
    std::cin >> temp;
    queries[i]._l = temp - 1;
  }
  std::sort(queries.begin(), queries.end());
  int inputIndex = 0, distinctCount = 0, arrayIndex = n - 1, *answers = new int[m];
  bool encountered[MAXLENGTH] = {0};
  while(true) {
    if(inputIndex == m) break;
    if(!encountered[inputs[arrayIndex] - 1]) {
      encountered[inputs[arrayIndex] - 1] = 1;
      ++distinctCount;
    }
    if(queries[inputIndex]._l == arrayIndex) {
      answers[queries[inputIndex]._i] = distinctCount;
      ++inputIndex;
      continue;
    }
    --arrayIndex;
  }
  for(int i = 0; i < m; ++i) {
    std::cout << answers[i] << '\n';
  }
}
