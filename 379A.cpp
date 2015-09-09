#include <iostream>

int num_candles(int a, int b) {
  int candlesBurnt = 0, candlesAtHand = a, wax = 0;
  while(true) {
    candlesBurnt += candlesAtHand;
    wax += candlesAtHand;
    candlesAtHand = 0;
    if(wax >= b) {
      candlesAtHand = wax / b;
      wax %= b;
    }
    if(candlesAtHand == 0) break;
  }
  return candlesBurnt;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << num_candles(a, b) << '\n';
}
