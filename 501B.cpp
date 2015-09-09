#include <iostream>
#include <map>	

int main() {
  int n;
  std::cin >> n;
  std::map<std::string, std::string> names;
  std::string s1, s2, temp;
  while(n--) {
    std::cin >> s1 >> s2;
    if(names.count(s1)) {
      temp = names[s1];
      names.erase(s1);
      names[s2] = temp;
    }
    else {
      names[s2] = s1;
    }
  }
  std::cout << names.size() << '\n';
  for(std::map<std::string, std::string>::iterator it = names.begin(); it != names.end(); ++it) {
    std::cout << it->second << " " << it->first << '\n';
  }
}
