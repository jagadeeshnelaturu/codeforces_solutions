#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int* home_color = new int[n];
  int* guest_color = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> home_color[i] >> guest_color[i];
  }
  int count = 0;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      if((i != j) && (home_color[i] == guest_color[j])) ++count;
    }
  }
  std::cout << count << '\n';
}
