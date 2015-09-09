#include <iostream>

#define ALPHABET_COUNT 26

int main() {
  std::string s,t;
  std::cin >> s >> t;
  int s_lowercase_count[ALPHABET_COUNT] = {0}; // first element is 0, and the others are default values(0 again)
  int s_uppercase_count[ALPHABET_COUNT] = {0};
  int t_lowercase_count[ALPHABET_COUNT] = {0};
  int t_uppercase_count[ALPHABET_COUNT] = {0};
  for(int i=0; i<s.size(); ++i) {
    char c = s[i];
    if((c >= 'a') && (c <= 'z')) {
      ++(s_lowercase_count[c-'a']);
    }
    else if((c >= 'A') && (c <= 'Z')) {
      ++(s_uppercase_count[c-'A']);
    }
  }
  for(int i=0; i<t.size(); ++i) {
    char c = t[i];
    if((c >= 'a') && (c <= 'z')) {
      ++(t_lowercase_count[c-'a']);
    }
    else if((c >= 'A') && (c <= 'Z')) {
      ++(t_uppercase_count[c-'A']);
    }
  }
  int yay=0, whoops=0;
  for(int i=0; i<ALPHABET_COUNT; ++i) {
    int a=s_lowercase_count[i], b=s_uppercase_count[i],
        c=t_lowercase_count[i], d=t_uppercase_count[i];
    yay += std::min(a,c) + std::min(b,d);
    bool b1 = (a <= c), b2 = (b <= d);
    if(b1) {
      if(b2) continue;
      else whoops += std::min(c-a,b-d);
    }
    else {
      if(b2) whoops += std::min(a-c,d-b);
      else continue;
    }
  }
  std::cout << yay << " " << whoops << '\n';
}
