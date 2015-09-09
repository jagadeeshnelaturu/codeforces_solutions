#include <iostream>

#define WEEK_DAYS 7

int main() {
  int n;
  std::cin >> n;
  int pages[WEEK_DAYS], sumPerWeek = 0;
  for(int i = 0; i < WEEK_DAYS; ++i) {
    std::cin >> pages[i];
    sumPerWeek += pages[i];
  }
  n %= sumPerWeek;
  if(n == 0) {
    int day = 6;
    while(!pages[day]) --day;
    std::cout << day + 1 << "\n";
    return 0;
  }
  int day = 0;
  while(true) {
    if(n <= pages[day]) break;
    n -= pages[day];
    ++day;
  }
  std::cout << day + 1<< '\n';
}
