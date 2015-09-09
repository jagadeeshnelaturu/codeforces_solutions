#include <iostream>

bool isTrue(int count100, int count200) {
  if(count100 & 1) return false;
  int temp = (count100 >> 1);
  bool b1 = (!((temp + count200) & 1) && (count200 >= temp)),
       b2 = (((temp + count200) & 1) && (count200 + 1 >= temp) && (count100 >= 1) && (temp + count200 >= 1)),
       b3 = (temp >= count200);
  return (b1 || b2 || b3);
}

int main() {
  int n;
  std::cin >> n;
  int count100 = 0, count200 = 0, temp;
  while(n--) {
    std::cin >> temp;
    if(temp == 100) ++count100;
    else if(temp == 200) ++count200;
  }
  std::cout << (isTrue(count100, count200) ? "YES" : "NO") << '\n';
}
