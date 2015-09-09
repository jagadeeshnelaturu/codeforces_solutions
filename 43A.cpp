#include <iostream>

int main() {
  int n;
  std::string team1 = "", team2 = "";
  std::cin >> n;
  int count1 = 0, count2 = 0;
  std::string temp;
  while(n--) {
    std::cin >> temp;
    if(team1 == "") {
      team1 = temp;
      ++count1;
    }
    else if(temp == team1) ++count1;
    else if(team2 == "") {
      team2 = temp;
      ++count2;
    }
    else if(temp == team2) ++count2;
  }
  std::cout << ((count1 > count2) ? team1 : team2) << '\n';
}
