#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

typedef long long int ll;

#define MAXVAL 1000000

class query {
  static int _s;
  int _i, _l, _r;

 public:
  query() {
  }
  query(int i, int l, int r) {
    _i = i;
    _l = l;
    _r = r;
  }
  int getIndex() {
    return _i;
  }
  int getL() {
    return _l;
  }
  int getR() {
    return _r;
  }
  static void setS(int s) {
    _s = s;
  }
  static int getS() {
    return _s;
  }
};

bool operator<(query q1, query q2) {
  int s = query::getS(), l1 = q1.getL(), r1 = q1.getR(), l2 = q2.getL(), r2 = q2.getR();
  if(l1 / s != l2 / s) return (l1 / s < l2 / s);
  return r1 / s < r2 / s;
}

int query::_s = 0;

int main() {
  int n, t;
  std::cin >> n >> t;
  int *inputs = new int[n];
  query::setS(sqrt(t));
  for(int i = 0; i < n; ++i) {
    std::cin >> inputs[i];
  }
  int l, r;
  std::vector<query> queries(t);
  for(int i = 0; i < t; ++i) {
    std::cin >> l >> r;
    queries[i] = query(i, l - 1, r - 1);
  }
  std::sort(queries.begin(), queries.end());
  int currentL = 0, currentR = 0;
  int counts[MAXVAL] = {0};
  ll result = inputs[0];
  counts[inputs[0] - 1] = 1;
  std::vector<ll> answers(t);
  int temp;
  for(std::vector<query>::iterator it = queries.begin(); it != queries.end(); ++it) {
    l = it->getL(), r = it->getR();
    while(currentL < l) {
      temp = inputs[currentL];
      --counts[temp - 1];
      result -= temp * (2 * counts[temp - 1] + 1);
      ++currentL;
    }
    while(currentL > l) {
      --currentL;
      temp = inputs[currentL];
      ++counts[temp - 1];
      result += temp * (2 * counts[temp - 1] - 1);
    }
    while(currentR < r) {
      ++currentR;
      temp = inputs[currentR];
      ++counts[temp - 1];
      result += temp * (2 * counts[temp - 1] - 1);
    }
    while(currentR > r) {
      temp = inputs[currentR];
      --counts[temp - 1];
      result -= temp * (2 * counts[temp - 1] + 1);
      --currentR;
    }
    answers[it->getIndex()] = result;
  }
  for(int i = 0; i < t; ++i) {
    std::cout << answers[i] << '\n';
  }
}
