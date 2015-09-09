#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  int size = s.size(), val = 0;
  std::map<char, int> starts;
  for(int i = 0; i < size; ++i) {
    if(starts.count(s[i])) continue;
    starts[s[i]] = i;
    ++val;
    if(val == n) break;
  }
  if(val < n) {
    std::cout << "NO\n";
    return 0;
  }
  std::vector<int> indices;
  for(std::map<char, int>::iterator it = starts.begin(); it != starts.end(); ++it) {
    indices.push_back(it->second);
  }
  std::sort(indices.begin(), indices.end());
  std::cout << "YES\n";
  std::string temp;
  for(int i = 0; i < n - 1; ++i) {
    temp = "";
    for(int j = indices[i]; j < indices[i + 1]; ++j) {
      temp += s[j];
    }
    std::cout << temp << '\n';
  }
  temp = "";
  for(int j = indices[indices.size() - 1]; j < size; ++j) {
    temp += s[j];
  }
  std::cout << temp << '\n';
}
