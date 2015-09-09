#include <iostream>
#include <map>

int main() {
  int n, m;
  std::cin >> n >> m;
  std::map<std::string, int> language1, language2;
  std::string* words = new std::string[m];
  std::string temp1, temp2;
  int size1, size2;
  for(int i = 0; i < m; ++i) {
    std::cin >> temp1 >> temp2;
    language1[temp1] = i;
    language2[temp2] = i;
    size1 = temp1.size();
    size2 = temp2.size();
    words[i] = ((size2 < size1) ? temp2 : temp1);
  }
  for(int i = 0; i < n; ++i) {
    std::cin >> temp1;
    if(language1.count(temp1)) {
      std::cout << words[language1[temp1]];
    }
    else if(language2.count(temp1)) {
      std::cout << words[language2[temp1]];
    }
    std::cout << " ";
  }
  std::cout << '\n';
}
