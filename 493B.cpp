#include <iostream>
#include <vector>

typedef long long int ll;

int main() {
  std::ios::sync_with_stdio(false);
  int n;
  std::cin >> n;
  int *points = new int[n], count1 = 0, count2 = 0;
  ll sum = 0;
  for(int i = 0; i < n; ++i) {
    std::cin >> points[i];
    sum += points[i];
    if(points[i] > 0) ++count1;
    else if(points[i] < 0) ++count2;
  }
  if(sum > 0) std::cout << "first\n";
  else if(sum < 0) std::cout << "second\n";
  else if(!sum) {
    std::vector<int> p1(count1), p2(count2);
    int j1 = 0, j2 = 0;
    for(int i = 0; i < n; ++i) {
      if(points[i] > 0) {
        p1[j1] = points[i];
        ++j1;
      }
      else if(points[i] < 0) {
        p2[j2] = -points[i];
        ++j2;
      }
    }
    j1 = 0;
    j2 = 0;
    while(true) {
      if((j1 == count1) && (j2 == count2)) {
        std::cout << ((points[n - 1] > 0) ? "first" : "second") << '\n';
        return 0;
      }
      else if(j1 == count1) {
        std::cout << "second\n";
        return 0;
      }
      else if(j2 == count2) {
        std::cout << "first\n";
        return 0;
      }
      else if(p1[j1] > p2[j2]) {
        std::cout << "first\n";
        return 0;
      }
      else if(p1[j1] < p2[j2]) {
        std::cout << "second\n";
        return 0;
      }
      else if(p1[j1] == p2[j2]) {
        ++j1;
        ++j2;
      }
    }
  }
}
