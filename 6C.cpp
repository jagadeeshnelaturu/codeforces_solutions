#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int *times = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> times[i];
  }
  int left = 0, right = n - 1, leftcount = 0, rightcount = 0,
      lefttime = 0, righttime = 0, temp;
  while(left <= right) {
    temp = lefttime - righttime;
    if(!temp) {
      if(left - right) {
        ++leftcount;
        ++rightcount;
        lefttime += times[left];
        righttime += times[right];
        ++left;
        --right;
      }
      else {
        ++leftcount;
        ++left;
      }
    }
    else if(temp > 0) {
      ++rightcount;
      righttime += times[right];
      --right;
    }
    else if(temp < 0) {
      ++leftcount;
      lefttime += times[left];
      ++left;
    }
  }
  std::cout << leftcount << ' ' << rightcount << '\n';
}
