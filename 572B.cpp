#include <iostream>
#include <map>

int main() {
  int n, s;
  std::cin >> n >> s;
  std::map<int, int> buy, sell;
  char c;
  int temp1, temp2;
  while(n--) {
    std::cin >> c >> temp1 >> temp2;
    if(c == 'B') buy[temp1] += temp2;
    else if(c == 'S') sell[temp1] += temp2;
  }
  std::map<int, int>::iterator it;
  int size1 = sell.size(), size2 = buy.size(), count;
  if((s >= size1) && size1) {
    count = 0;
    it = --sell.end();
    while(count != size1) {
      std::cout << "S " << it->first << ' ' << it->second << '\n';
      --it;
      ++count;
    }
  }
  else if(s < size1) {
    it = sell.begin();
    for(int i = 1; i < s; ++i) ++it;
    while(count != s) {
      std::cout << "S " << it->first << ' ' << it->second << '\n';
      --it;
      ++count;
    }
  }
  if((s >= size2) && size2) {
    count = 0;
    it = --buy.end();
    while(count != size2) {
      std::cout << "B " << it->first << ' ' << it->second << '\n';
      --it;
      ++count;
    }
  }
  else if(s < size2) {
    count = 0;
    it = --buy.end();
    while(count != s) {
      std::cout << "B " << it->first << ' ' << it->second << '\n';
      --it;
      ++count;
    }
  }
}
