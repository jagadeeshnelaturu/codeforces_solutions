#include <iostream>

int main() {
  std::string currentTime, sleepDuration;
  std::cin >> currentTime >> sleepDuration;
  int hours1 = (currentTime[0] - '0') * 10 + (currentTime[1] - '0'),
      hours2 = (sleepDuration[0] - '0') * 10 + (sleepDuration[1] - '0'),
      minutes1 = (currentTime[3] - '0') * 10 + (currentTime[4] - '0'),
      minutes2 = (sleepDuration[3] - '0') * 10 + (sleepDuration[4] - '0');
  if(minutes1 < minutes2) {
    --hours1;
    minutes1 += 60;
  }
  if(hours1 < hours2) {
    hours1 += 24;
  }
  if(hours1 - hours2 < 10) {
    std::cout << "0";
  }
  std::cout << hours1 - hours2 << ":";
  if(minutes1 - minutes2 < 10) {
    std::cout << "0";
  }
  std::cout << minutes1 - minutes2 << '\n';
}
