#include <iostream>
#include <vector>
#include <map>

int difference(std::vector<int>& positions) {
  int size = positions.size();
  if(size == 1) return 0;
  int diff = positions[1] - positions[0];
  for(int i = 2; i < size; ++i) {
    if(positions[i] - positions[i - 1] != diff) return -1;
  }
  return diff;
}

int main() {
  int n;
  std::cin >> n;
  std::map<int, std::vector<int> > positions;
  int temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    positions[temp].push_back(i);
  }
  std::vector<int> answers, differences;
  for(std::map<int, std::vector<int> >::iterator it = positions.begin(); it != positions.end(); ++it) {
    temp = difference(it->second);
    if(temp != -1) {
      answers.push_back(it->first);
      differences.push_back(temp);
    }
  }
  temp = answers.size();
  std::cout << temp << '\n';
  for(int i = 0; i < temp; ++i) {
    std::cout << answers[i] << " " << differences[i] << '\n';
  }
}
