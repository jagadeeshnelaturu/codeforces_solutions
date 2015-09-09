#include <iostream>

#define ZERO "zero"
#define ONE "one"
#define TWO "two"
#define THREE "three"
#define FOUR "four"
#define FIVE "five"
#define SIX "six"
#define SEVEN "seven"
#define EIGHT "eight"
#define NINE "nine"
#define TEN "ten"
#define ELEVEN "eleven"
#define TWELVE "twelve"
#define THIRTEEN "thirteen"
#define FOURTEEN "fourteen"
#define FIFTEEN "fifteen"
#define SIXTEEN "sixteen"
#define SEVENTEEN "seventeen"
#define EIGHTEEN "eighteen"
#define NINETEEN "nineteen"
#define TWENTY "twenty"
#define THIRTY "thirty"
#define FORTY "forty"
#define FIFTY "fifty"
#define SIXTY "sixty"
#define SEVENTY "seventy"
#define EIGHTY "eighty"
#define NINETY "ninety"

int main() {
  int n;
  std::cin >> n;
  int a = n / 10, b = n % 10;
  if((a == 0) && (b == 0)) {
    std::cout << ZERO << '\n';
    return 0;
  }
  if(a >= 2) {
    switch(a) {
     case 2:
      std::cout << TWENTY;
      break;
     case 3:
      std::cout << THIRTY;
      break;
     case 4:
      std::cout << FORTY;
      break;
     case 5:
      std::cout << FIFTY;
      break;
     case 6:
      std::cout << SIXTY;
      break;
     case 7:
      std::cout << SEVENTY;
      break;
     case 8:
      std::cout << EIGHTY;
      break;
     case 9:
      std::cout << NINETY;
      break;
    }
    if(b != 0) std::cout << "-";
  }
  else if(a == 1) {
    switch(b) {
     case 0:
      std::cout << TEN;
      break;
     case 1:
      std::cout << ELEVEN;
      break;
     case 2:
      std::cout << TWELVE;
      break;
     case 3:
      std::cout << THIRTEEN;
      break;
     case 4:
      std::cout << FOURTEEN;
      break;
     case 5:
      std::cout << FIFTEEN;
      break;
     case 6:
      std::cout << SIXTEEN;
      break;
     case 7:
      std::cout << SEVENTEEN;
      break;
     case 8:
      std::cout << EIGHTEEN;
      break;
     case 9:
      std::cout << NINETEEN;
      break;
    }
    std::cout << '\n';
    return 0;
  }
  switch(b) {
   case 1:
    std::cout << ONE;
    break;
   case 2:
    std::cout << TWO;
    break;
   case 3:
    std::cout << THREE;
    break;
   case 4:
    std::cout << FOUR;
    break;
   case 5:
    std::cout << FIVE;
    break;
   case 6:
    std::cout << SIX;
    break;
   case 7:
    std::cout << SEVEN;
    break;
   case 8:
    std::cout << EIGHT;
    break;
   case 9:
    std::cout << NINE;
    break;
  }
  std::cout << '\n';
}
