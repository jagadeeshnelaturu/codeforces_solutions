#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int* values = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
  }
  int forward = 0, backward = n - 1, sereja = 0, dima = 0, temp;
  for(int i = 0; i < n; ++i) {
    if(values[forward] > values[backward]) {
      temp = values[forward];
      ++forward;
    }
    else if(values[forward] <= values[backward]) {
      temp = values[backward];
      --backward;
    }
    if(i % 2 == 0) sereja += temp;
    else if(i % 2 == 1) dima += temp;
  }
  std::cout << sereja << " " << dima << '\n';
}
