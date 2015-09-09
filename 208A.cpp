#include <iostream>
#include <string>
#include <set>

void removePrefix(std::string& s, std::string& c) {
  int size1 = s.size(), size2 = c.size();
  int i;
  for(i = 0; i < size1; ++i) {
    if(s[i] != c[i % size2]) break;    
  }
  i -= i % size2;
  s.erase(s.begin(), s.begin() + i);
}

void removeSuffix(std::string& s, std::string& c) {
  int size1 = s.size(), size2 = c.size();
  int i;
  for(i = size1 - 1; i >= 0; --i) {
    int index2 = ((i - size1) % size2 + size2) % size2; // to get +ve modulo
    if(s[i] != c[index2]) {
      break;
    }
  }
  int numOccurences = (size1 - i - 1) / size2;
  s.erase(s.begin() + size1 - numOccurences * size2, s.end());
}

void removeInBetween(std::string& s, std::string c) {
  int size2 = c.size();
  std::set<int> positions;
  for(int i = 0; i < s.size(); ++i) {
    std::size_t found = s.find(c, i);
    if(found == -1) break;
    positions.insert(found);
  }
  int count = 0;
  for(std::set<int>::iterator i = positions.begin(); i != positions.end(); ++i) {
    s.replace(*i - count * (size2 - 1), size2, "$");
    ++count;
  }
}

std::string insertSpaces(std::string& s) {
  std::string ret = "";
  int size1 = s.size();
  bool started = false;
  for(int i = 0; i < size1; ++i) {
    if(s[i] != '$') {
      if(started) started = false;
      ret += s[i];
    }
    else if(s[i] == '$') {
      if(!started) {
        ret += ' ';
        started = true;
      }
    }
  }
  return ret;
}

int main() {
  std::string s, c = "WUB";
  std::cin >> s;
  removePrefix(s, c);
  removeSuffix(s, c);
  removeInBetween(s, c);
  s = insertSpaces(s);
  std::cout << s << '\n';
}
