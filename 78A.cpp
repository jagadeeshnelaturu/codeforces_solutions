#include <iostream>

int numVowels(std::string s) {
  int count = 0;
  for(std::string::iterator it = s.begin(); it != s.end(); ++it) {
    count += ((*it == 'a') || (*it == 'e') || (*it == 'i') || (*it == 'o') || (*it == 'u'));
  }
  return count;
}

int main() {
  std::string s1, s2, s3;
  std::getline(std::cin, s1);
  std::getline(std::cin, s2);
  std::getline(std::cin, s3);
  std::cout << (((numVowels(s1) == 5) && (numVowels(s2) == 7) && (numVowels(s3) == 5)) ?
                "YES" : "NO") << '\n';
}
