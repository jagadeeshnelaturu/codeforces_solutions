#include <iostream>
#include <vector>

#define NUM_PRIMES 4
#define NUM_DIGITS 10

int main() {
  int numDigits;
  std::cin >> numDigits;
  int indices[NUM_PRIMES] = {0};
  int factorial_indices[NUM_PRIMES][NUM_DIGITS] = {{0, 0, 1, 1, 3, 3, 4, 4, 7, 7}, {0, 0, 0, 1, 1, 1, 2, 2, 2, 4},
                                                   {0, 0, 0, 0, 0, 1, 1, 1, 1, 1}, {0, 0, 0, 0, 0, 0, 0, 1, 1, 1}};
  /*factorial_indices[0] = {0, 0, 1, 1, 3, 3, 4, 4, 7, 7};
  factorial_indices[1] = ;
  factorial_indices[2] = ;
  factorial_indices[3] = ;*/
  char tempDigit;
  while(numDigits--) {
    std::cin >> tempDigit;
    for(int i = 0; i <NUM_PRIMES; ++i) {
      indices[i] += factorial_indices[i][(int)(tempDigit - '0')];
    }
  }
  for(int i = 0; i < indices[3]; ++i) {
    std::cout << 7;
  }
  for(int i = 0; i < indices[2] - indices[3]; ++i) {
    std::cout << 5;
  }
  for(int i = 0; i < indices[1] - indices[2] - indices[3]; ++i) {
    std::cout << 3;
  }
  for(int i = 0; i < indices[0] - indices[1] - 2 * indices[2]; ++i) {
    std::cout << 2;
  }
  std::cout << '\n';
}
