#include <iostream>

int gcd(int a, int b) {
  if(a < b) a = a + b - (b = a);
  int temp;
  while(true) {
    if(a % b == 0) return b;
    else if(a > b) {
      temp = a % b;
      a = b;
      b = temp;
    }
  }
}

int winner(int a, int b, int n, int player) {
  while(true) {
    if(player == 1) {
      if(a % n == 0) return 1; // player 1 won
      else {
        n -= gcd(a, n);
        player = 2;
      }
    }
    else if(player == 2) {
      if(b % n == 0) return 2; // player 2 won
      else {
        n -= gcd(b, n);
        player = 1;
      }
    } 
  }
}

int main() {
  int a, b, n;
  std::cin >> a >> b >> n;
  int w = winner(a, b, n, 1);
  std::cout << w - 1 << '\n';
}
