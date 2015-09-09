#include <iostream>
#include <sstream>
#include <cstdlib>

int type(std::string s) { // 1 means "<column letter><row number>", 2 means "R<row number>C<column number>"
  int i=0;
  while((i < s.size()) && ('A' <= s[i]) && (s[i] <= 'Z')) ++i;
  while((i < s.size()) && ('0' <= s[i]) && (s[i] <= '9')) ++i;
  if(i == s.size()) {
    return 1;
  }
  return 2;
}

std::string type1to2(std::string s) {
  int i=0;
  std::string column = "", row = "";
  while((i<s.size()) && ('A' <= s[i]) && (s[i] <= 'Z')) {
    column += s[i];
    ++i;
  }
  while(i < s.size()) {
    row += s[i];
    ++i;
  }
  int columnno = 0, j;
  for(j=0; j<column.size(); ++j) {
    columnno = columnno*26 + column[j] - 'A' + 1;
  }
  std::stringstream ss;
  ss << columnno;
  std::string ret = "R" + row + "C" + ss.str();
  return ret;
}

std::string type2to1(std::string s) {
  int i=1; //s[0] == 'R'
  std::string row = "";
  while((i<s.size()) && ('0' <= s[i]) && (s[i] <= '9')) {
    row += s[i];
    ++i;
  }
  ++i; // parse "C"
  int columnno = atoi(s.substr(i).c_str());
  std::string column = "";
  char temp;
  while(columnno > 0) {
    temp = (columnno-1)%26 + 'A';
    columnno = (columnno-1)/26;
    column = temp + column;
  }
  std::string ret = column + row;
  return ret;
}

int main() {
  int n;
  std::cin >> n;
  std::string s;
  while(n--) {
    std::cin >> s;
    std::cout << ((type(s) == 1) ? type1to2(s) : type2to1(s)) << '\n';
  }
}
