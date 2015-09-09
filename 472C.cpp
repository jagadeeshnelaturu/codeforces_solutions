#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<std::string> firstNames(n), lastNames(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> firstNames[i] >> lastNames[i];
  }
  int temp;
  std::cin >> temp;
  std::string comparator = ((firstNames[temp - 1] < lastNames[temp - 1])
                            ? firstNames[temp - 1] : lastNames[temp - 1]);
  while(std::cin >> temp) {
    std::string temp1 = ((firstNames[temp - 1] < lastNames[temp - 1])
                         ? firstNames[temp - 1] : lastNames[temp - 1]),
                temp2 = ((firstNames[temp - 1] > lastNames[temp - 1])
                         ? firstNames[temp - 1] : lastNames[temp - 1]);
    if(temp1 > comparator) {
      comparator = temp1;
      continue;
    }
    else if(temp2 > comparator) {
      comparator = temp2;
      continue;
    }
    else {
      std::cout << "NO\n";
      return 0;
    }
  }
  std::cout << "YES\n";
}
