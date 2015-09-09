#include <iostream>
#include <map>
#include <sstream>
#include <fstream>

int main() {
  std::ifstream in("input.txt");
  std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
  std::cin.rdbuf(in.rdbuf()); //redirect std::cin to in.txt!

  std::ofstream out("output.txt");
  std::streambuf *coutbuf = std::cout.rdbuf(); //save old buf
  std::cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!
  
  int n;
  std::cin >> n;
  std::string output;
  std::map<int, int> positions;
  std::stringstream ss;
  int temp;
  for(int i = 0; i < 2 * n; ++i) {
    std::cin >> temp;
    if(positions.count(temp)) {
      ss << positions[temp];
      output += ss.str() + ' ';
      ss.str(std::string());
      ss << i + 1;
      output += ss.str() + '\n';
      ss.str(std::string());
      positions.erase(temp);
    }
    else {
      positions[temp] = i + 1;
    }
  }
  if(!positions.empty()) std::cout << "-1\n";
  else std::cout << output;
}
