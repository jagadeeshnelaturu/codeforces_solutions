#include <iostream>
#include <cstdlib>
#include <sstream>

int main() {
  std::string num1, num2;
  std::cin >> num1 >> num2;
  std::string new1, new2;
  std::string::iterator it;
  for(it = num1.begin(); it != num1.end(); ++it) {
    if(*it != '0') new1 += *it;
  }
  for(it = num2.begin(); it != num2.end(); ++it) {
    if(*it != '0') new2 += *it;
  }
  int sum = atoi(num1.c_str()) + atoi(num2.c_str());
  std::stringstream ss;
  ss << sum;
  std::string sumString = ss.str(), newsum;
  for(it = sumString.begin(); it != sumString.end(); ++it) {
    if(*it != '0') newsum += *it;
  }
  std::cout << ((atoi(new1.c_str()) + atoi(new2.c_str()) == atoi(newsum.c_str())) ? "YES" : "NO") << '\n';
}
