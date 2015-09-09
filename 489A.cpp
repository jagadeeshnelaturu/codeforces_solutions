#include <iostream>
#include <sstream>

int main() {
  int n;
  std::cin >> n;
  int *inputs = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> inputs[i];
  }
  int minindex, swapcount = 0;
  std::string output = "";
  std::stringstream ss1, ss2;
  for(int i = 0; i < n; ++i) {
    minindex = i;
    for(int j = i + 1; j < n; ++j) {
      if(inputs[j] < inputs[minindex]) minindex = j;
    }
    if(i == minindex) continue;
    inputs[i] ^= inputs[minindex] ^= inputs[i] ^= inputs[minindex];
    ss1 << i;
    ss2 << minindex;
    output += ss1.str() + " " + ss2.str() + '\n';
    ++swapcount;
    ss1.str(std::string());
    ss2.str(std::string());
  }
  std::cout << swapcount << "\n" << output;
}
