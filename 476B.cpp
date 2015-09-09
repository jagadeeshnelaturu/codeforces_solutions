#include <iostream>
#include <iomanip>

int nCr(int n, int r) { // n, r < 10
  if((n < 0) || (r < 0) || (n < r)) return 0;
  int numerator = 1, denominator = 1;
  for(int i = r + 1; i <= n; ++i) {
    numerator *= i;
    denominator *= i - r;
  }
  return (numerator / denominator);
}

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;
  int size = s1.size(), transmitted = 0, received = 0, error = 0;
  for(int i = 0; i < size; ++i) {
    if(s1[i] == '+') ++transmitted;
    else if(s1[i] == '-') --transmitted;
  }
  for(int i = 0; i < size; ++i) {
    if(s2[i] == '+') ++received;
    else if(s2[i] == '-') --received;
    else if(s2[i] == '?') ++error;
  }
  int r = (transmitted - received) * ((transmitted > received) ? 1 : -1);
  if((error - r) % 2) std::cout << "0\n";
  else {
    int favorableWays = nCr(error, ((error - r) >> 1));
    double probability = (double) favorableWays / (1 << error);
    std::cout << std::setprecision(10) << probability << '\n';
  }
}
