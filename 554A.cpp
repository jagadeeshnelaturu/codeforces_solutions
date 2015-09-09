#include <iostream>
#include <set>

#define NUM_ALPHABETS 26

int main() {
  std::string s;
  std::cin >> s;
  int size = s.size();
  std::set<std::string> values;
  std::string temp;
  for(int i = 0; i <= size; ++i) {
    for(int j = 0; j < NUM_ALPHABETS; ++j) {
      temp = s.substr(0, i) + (char)(j + 'a') + s.substr(i);
      values.insert(temp);
    }
  }
  std::cout << values.size() << '\n';
}
