#include <iostream>

int main() {
  int numEvents;
  std::cin >> numEvents;
  int untreatedCrimes = 0, freeOfficers = 0;
  int temp;
  for(int i = 0; i < numEvents; ++i) {
    std::cin >> temp;
    if(temp > 0) {
      freeOfficers += temp;
    }
    else if(temp == -1) {
      if(freeOfficers == 0) {
        ++untreatedCrimes;
      }
      else {
        --freeOfficers;
      }
    }
  }
  std::cout << untreatedCrimes << '\n';
}
