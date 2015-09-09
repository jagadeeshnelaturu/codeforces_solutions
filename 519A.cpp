#include <iostream>

#define QUEEN 9
#define ROOK 5
#define BISHOP 3
#define KNIGHT 3
#define PAWN 1

int main() {
  char c;
  int sum = 0;
  while(std::cin >> c) {
    switch(c) {
     case 'Q':
      sum += QUEEN;
      break;
     case 'R':
      sum += ROOK;
      break;
     case 'B':
      sum += BISHOP;
      break;
     case 'N':
      sum += KNIGHT;
      break;
     case 'P':
      sum += PAWN;
      break;
     case 'q':
      sum -= QUEEN;
      break;
     case 'r':
      sum -= ROOK;
      break;
     case 'b':
      sum -= BISHOP;
      break;
     case 'n':
      sum -= KNIGHT;
      break;
     case 'p':
      sum -= PAWN;
      break;
     default:
      break;
    }
  }
  if(sum > 0) std::cout << "White\n";
  else if(sum == 0) std::cout << "Draw\n";
  else if(sum < 0) std::cout << "Black\n";
}
