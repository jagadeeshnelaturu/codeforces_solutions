#include <iostream>

int main() {
  long long int n, m;
  std::cin >> n >> m;
  long long int distance = 0, initialPos = 1, temp;
  while(m--) {
    std::cin >> temp;
    if(temp >= initialPos) {
      distance += temp - initialPos;
    }
    else if(temp < initialPos) {
      distance += n - initialPos + temp;
    }
    initialPos = temp;
  }
  std::cout << distance << '\n';
}
