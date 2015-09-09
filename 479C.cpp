#include <iostream>
#include <vector>
#include <algorithm>

struct exam {
  int a, b;
};

bool operator<(const exam e1, const exam e2) {
  if(e1.a != e2.a) return e1.a < e2.a;
  else return e1.b < e2.b;
}

int main() {
  int n;
  std::cin >> n;
  std::vector<exam> exams(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> exams[i].a >> exams[i].b;
  }
  std::sort(exams.begin(), exams.end());
  int min = 0;
  for(int i = 0; i < n; ++i) {
    min = ((exams[i].b < min) ? exams[i].a : exams[i].b);
  }
  std::cout << min << '\n';
}
