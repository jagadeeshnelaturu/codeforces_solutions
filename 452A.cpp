#include <iostream>

void match(std::string s) {
  char compare[6][4] = {{'j', 'o', 'l', 't'}, {'f', 'l', 'a', 'r'}, {'u', 'm', 'b', 'r'},
                        {'l', 'e', 'a', 'f'}, {'g', 'l', 'a', 'c'}, {'s', 'y', 'l', 'v'}};
  int i, j;
  for(i = 0; i < 6; ++i) {
    for(j = 0; j < 4; ++j) {
      if((s[j] != '.') && (s[j] != compare[i][j])) break;
    }
    if(j == 4) {
      switch(i) {
       case 0:
        std::cout << "jolteon\n";
        break;
       case 1:
        std::cout << "flareon\n";
        break;
       case 2:
        std::cout << "umbreon\n";
        break;
       case 3:
        std::cout << "leafeon\n";
        break;
       case 4:
        std::cout << "glaceon\n";
        break;
       case 5:
        std::cout << "sylveon\n";
        break;
      }
    }
  }
}

int main() {
  int n;
  std::string s;
  std::cin >> n >> s;
  switch(n) {
   case 6:
    std::cout << "espeon\n";
    break;
   case 7:
    match(s);
    break;
   case 8:
    std::cout << "vaporeon\n";
    break;
  }
}

/*
jolt
flar
umbr
leaf
glac
sylv
1st char: all different
2nd : l for flareon, glaceon
3rd : l for jolteon, sylveon
      a for flareon, leafeon, glaceon
4th : r for flareon, umbreon
*/
