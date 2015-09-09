#include <iostream>

#define SHOE_COUNT 4

int main() {
  int a[SHOE_COUNT];
  int count = 0;
  for(int i = 0; i < SHOE_COUNT; ++i) {
    std::cin >> a[i];
    int j;
    for(j = 0; j < i; ++j) {
      if(a[i] == a[j]) break;
    }
    if(j == i) ++count;
  }
  std::cout << SHOE_COUNT - count << '\n';
}
