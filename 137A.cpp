#include <iostream>

#define CAPACITY 5

int main() {
  std::ios::sync_with_stdio(false);
  char prev = ' ', c;
  int count = 0, numtimes = 0;
  while(std::cin >> c) {
    if(prev == ' ') {
      prev = c;
      count = 1;
    }
    else if(c == prev) {
      ++count;
      if(count == CAPACITY) {
        ++numtimes;
        count = 0;
        prev = ' ';
      }
    }
    else if(c != prev) {
      ++numtimes;
      prev = c;
      count = 1;
    }
  }
  if(count) ++numtimes;
  std::cout << numtimes << '\n';
}
