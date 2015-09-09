#include <iostream>

int main() {
  int m, s;
  std::cin >> m >> s;
  if(!(m - 1) && !s) {
    std::cout << "0 0\n";
    return 0;
  }
  if(!s || (s > 9 * m)) {
    std::cout << "-1 -1\n";
    return 0;
  }
  char *minvals = new char[m];
  for(int i = 0; i < m; ++i) {
    minvals[i] = '0';
  }
  minvals[0] += 1;
  int minsum = s - 1, i = m - 1;
  while(minsum) {
    minvals[i] += std::min(minsum, 9);
    minsum -= std::min(minsum, 9);
    --i;
  }
  char *maxvals = new char[m];
  for(int i = 0; i < m; ++i) {
    maxvals[i] = '0';
  }
  int maxsum = s;
  i = 0;
  while(maxsum) {
    maxvals[i] += std::min(maxsum, 9);
    maxsum -= std::min(maxsum, 9);
    ++i;
  }
  for(int i = 0; i < m; ++i) {
    std::cout << minvals[i];
  }
  std::cout << " ";
  for(int i = 0; i < m; ++i) {
    std::cout << maxvals[i];
  }
  std::cout << "\n";
}
