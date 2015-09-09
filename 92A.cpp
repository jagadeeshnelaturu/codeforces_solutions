#include <iostream>
#include <cmath>

int main() {
  int n, m;
  std::cin >> n >> m;
  int sumPerRound = (n * (n + 1)) >> 1, numberOfRounds = m / sumPerRound,
      remainingInLastRound = m % sumPerRound,
      lastIndex = (int) ((sqrt(8 * remainingInLastRound + 1) - 1) / 2),
      result = remainingInLastRound - ((lastIndex * (lastIndex + 1)) >> 1);
  std::cout << result << '\n';
}
