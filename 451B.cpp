#include <iostream>

int main() {
  int n;
  std::cin >> n; // can be done easily by storing in an array- trying to avoid that here :D
  int localMax = -1, localMaxVal, beforeLocalMaxVal, localMin = -1, localMinVal, afterLocalMinVal, prevVal, prevVal2, currentVal, firstVal;
  if(n == 1) {
    std::cout << "yes\n1 1\n";
    return 0;
  }
  std::cin >> prevVal2 >> prevVal;
  if(n == 2) {
    std::cout << "yes\n" << ((prevVal2 < prevVal) ? "1 1\n" : "1 2\n");
    return 0;
  }
  firstVal = prevVal2;
  for(int i = 3; i <= n; ++i) {
    std::cin >> currentVal;
    if((prevVal < currentVal) && (prevVal < prevVal2)) {
      if(localMin != -1) {
        std::cout << "no\n";
        return 0;
      }
      localMin = i - 1;
      localMinVal = prevVal;
      afterLocalMinVal = currentVal;
    }
    else if((prevVal > currentVal) && (prevVal > prevVal2)) {
      if(localMax != -1) {
        std::cout << "no\n";
        return 0;
      }
      localMax = i - 1;
      localMaxVal = prevVal;
      beforeLocalMaxVal = prevVal2;
    }
    prevVal2 = prevVal;
    prevVal = currentVal;
  }
  if(localMin == -1) {
    if(localMax == -1) {
      if(prevVal < prevVal2) {
        std::cout << "yes\n1 " << n << '\n';
      }
      else {
        std::cout << "yes\n1 1\n";
      }
    }
    else {
      if(prevVal < beforeLocalMaxVal) {
        std::cout << "no\n";
      }
      else {
        std::cout << "yes\n" << localMax << " " << n << '\n';
      }
    }
  }
  else {
    if(localMax == -1) {
      if(firstVal < afterLocalMinVal) {
        std::cout << "yes\n1 " << localMin << '\n';
      }
      else {
        std::cout << "no\n";
      }
    }
    else {
      if((localMin < localMax) || (beforeLocalMaxVal > localMinVal) || (afterLocalMinVal < localMaxVal)) {
        std::cout << "no\n";
      }
      else {
        std::cout << "yes\n" << localMax << " " << localMin << '\n';
      }
    }
  }
}
