#include <iostream>

std::string parentDirectory(std::string dir) {
  int size = dir.size(), i;
  for(i = size - 2; i >= 0; --i) { // last character is definitely a '/'
    if(dir[i] == '/') break;
  }
  return dir.substr(0, i + 1);
}

int main() {
  int n;
  std::cin >> n;
  std::string directory = "/", param1, param2;
  while(n--) {
    std::cin >> param1;
    if(param1 == "pwd") {
      std::cout << directory << "\n";
    }
    else if(param1 == "cd") {
      std::cin >> param2;
      std::string::iterator it = param2.begin();
      while(it != param2.end()) {
        if((it == param2.begin()) && (*it == '/')) {
          directory = "/";
        }
        else if(*it == '.') {
          ++it;
          if(it != --param2.end()) ++it; // skip "../"
          directory = parentDirectory(directory);
        }
        else {
          directory += *it;
        }
        ++it;
      }
      if(directory[directory.size() - 1] != '/') directory += "/";
    }
  }
}
