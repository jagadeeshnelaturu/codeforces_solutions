#include <iostream>

int main() {
  int d, sumtime;
  std::cin >> d >> sumtime;
  int* mintimes = new int[d];
  int* maxtimes = new int[d];
  int mintime_sum=0, maxtime_sum=0;
  for(int i=0; i<d; ++i) {
    std::cin >> mintimes[i] >> maxtimes[i];
    mintime_sum += mintimes[i];
    maxtime_sum += maxtimes[i];
  }
  if((mintime_sum > sumtime) || (maxtime_sum < sumtime)) {
    std::cout << "NO\n";
    return 0;
  }
  std::cout << "YES\n";
  int i=0, diff = sumtime - mintime_sum;
  while(true) {
    int temp = maxtimes[i] - mintimes[i];
    if(diff > temp) {
      diff -= temp;
      ++i;
      continue;
    }
    else if(diff == temp) {
      diff -= temp;
      ++i;
      break;
    }
    else if(diff < temp) {
      break;
    }
  }
  if(i==d) {
    for(int j=0; j<i-1; ++j) std::cout << maxtimes[j] << " ";
    std::cout << maxtimes[i-1] << '\n';
    return 0;
  }
  for(int j=0; j<i; ++j) std::cout << maxtimes[j] << " ";
  std::cout << mintimes[i] + diff << ((i==d-1) ? "\n" : " ");
  for(int j=i+1; j<d; ++j) {
    std::cout << mintimes[j] ;
    if(j != d-1) std::cout << " ";
    else std::cout << '\n';
  }
}
