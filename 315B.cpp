#include <iostream>

typedef long long int ll;

int main() {
  ll n, m;
  std::cin >> n >> m;
  ll *vals = new ll[n];
  for(int i =0; i < n; ++i) {
    std::cin >> vals[i];
  }
  ll temp1, temp2, temp3, sum = 0;
  while(m--) {
    std::cin >> temp1 >> temp2;
    switch(temp1) {
     case 1:
      std::cin >> temp3;
      vals[temp2 - 1] = temp3 - sum;
      break;
     case 2:
      sum += temp2;
      break;
     case 3:
      std::cout << vals[temp2 - 1] + sum << '\n';
      break;
    }
  }
}
