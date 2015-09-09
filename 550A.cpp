#include <iostream>

int main() {
  std::string s;
  std::cin >> s;
  int size = s.size();
  int position_ab = -1, position_ba = -1;
  bool ab_twice = false, ba_twice = false;
  for(int i = 0; i < size - 1; ++i) {
    if((s[i] == 'A') && (s[i + 1] == 'B')) {
      if(ba_twice) {
        std::cout << "YES\n";
        return 0;
      }
      else if((position_ba != -1) && (position_ba != i - 1)) {
        std::cout << "YES\n";
        return 0;
      }
      else if(position_ab != -1) {
        ab_twice = true;
      }
      else {
        position_ab = i;
      }
    }
    else if((s[i] == 'B') && (s[i + 1] == 'A')) {
      if(ab_twice) {
        std::cout << "YES\n";
        return 0;
      }
      else if((position_ab != -1) && (position_ab != i - 1)) {
        std::cout << "YES\n";
        return 0;
      }
      else if(position_ba != -1) {
        ba_twice = true;
      }
      else {
        position_ba = i;
      }
    }
  }
  std::cout << "NO\n";
}
