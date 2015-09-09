#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  int candidates, cities;
  std::cin >> candidates >> cities;
  int *wins = new int[candidates];
  for(int i = 0; i < candidates; ++i) {
    wins[i] = 0;
  }
  int winner, maxvotes, votes;
  for(int i = 0; i < cities; ++i) {
    maxvotes = -1;
    for(int j = 0; j < candidates; ++j) {
      std::cin >> votes;
      if(votes > maxvotes) {
        winner = j;
        maxvotes = votes;
      }
    }
    ++wins[winner];
  }
  winner = 0;
  for(int i = 1; i < candidates; ++i) {
    if(wins[i] > wins[winner]) winner = i;
  }
  std::cout << winner + 1 << '\n';
}
