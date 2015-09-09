#include <iostream>

int main() {
  int n, captain;
  std::cin >> n;
  std::string *inputs = new std::string[n], *designations = new std::string[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> inputs[i] >> designations[i];
    if(designations[i] == "captain") captain = i;
  }
  for(int i = 0; i < n; ++i) {
    if(designations[i] == "rat") std::cout << inputs[i] << '\n';
  }
  for(int i = 0; i < n; ++i) {
    if((designations[i] == "woman") || (designations[i] == "child")) std::cout << inputs[i] << '\n';
  }
  for(int i = 0; i < n; ++i) {
    if(designations[i] == "man") std::cout << inputs[i] << '\n';
  }
  std::cout << inputs[captain] << '\n';
}
