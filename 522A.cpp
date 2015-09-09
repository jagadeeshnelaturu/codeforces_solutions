#include <iostream>
#include <map>

std::string to_lower_case(std::string s) {
  std::string ret="";
  for(std::string::iterator i=s.begin(); i!=s.end(); ++i) {
    char c = *i;
    if(('a' <= c) && (c <= 'z')) ;
    else if(('A' <= c) && (c <= 'Z')) {
      c += 'a' - 'A';
    }
    ret += c;
  }
  return ret;
}

int main() {
  std::map<std::string, std::string> parent;
  parent["polycarp"] = "";
  std::map<std::string, int> count;
  count["polycarp"] = 1;
  int n;
  std::cin >> n;
  while(n--) {
    std::string s1,reposted,s3;
    std::cin >> s1 >> reposted >> s3;
    s1 = to_lower_case(s1);
    s3 = to_lower_case(s3);
    parent[s1] = s3;
    count[s1] = 1;
    while(true) {
      if(count[s3] >= count[s1]+1) break;
      else if(count[s3] < count[s1]+1) {
        count[s3] = count[s1] + 1;
      }
      if(s3 == "polycarp") break;
      s1 = parent[s1];
      s3 = parent[s1];
    }
  }
   std::cout << count["polycarp"] << '\n';
}
