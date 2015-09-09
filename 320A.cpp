#include <iostream>

int transition_function(int state, char input) {
  if(state == 0) {
    switch(input) {
     case '1':
      return 1;
     default:
      return -1;
    }
  }
  else if(state == 1) {
    switch(input) {
     case '1':
      return 1;
     case '4':
      return 2;
     default:
      return -1;
    }
  }
  else if(state == 2) {
    switch(input) {
     case '1':
      return 1;
     case '4':
      return 0;
     default:
      return -1;
    }
  }
}

int main() {
  int state = 0;
  char c;
  while(std::cin >> c) {
    state = transition_function(state, c);
    if(state == -1) {
      std::cout << "NO\n";
      return 0;
    }
  }
  std::cout << "YES\n";
}

