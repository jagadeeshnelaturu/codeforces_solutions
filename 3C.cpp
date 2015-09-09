#include <iostream>

#define GRID_SIZE 3
#define ILLEGAL 3

int check(char a[3][3], int x1, int y1, int x2, int y2, int x3, int y3) {
  if((a[x1][y1] == a[x2][y2]) && (a[x2][y2] == a[x3][y3])) {
    if(a[x1][y1] == 'X') return 1;
    else if(a[x1][y1] == '0') return 2;
  }
  return 0;
}

int winner(char a[3][3]) {
  std::string won = "";
  int winner = 0;
  int temp = check(a,0,0,0,1,0,2);
  if(temp != 0) {
    won = "row";
    winner = temp;
  }
  temp = check(a,1,0,1,1,1,2);
  if(temp != 0) {
    if(won == "row") return ILLEGAL;
    won = "row";
    winner = temp;
  }
  temp = check(a,2,0,2,1,2,2);
  if(temp != 0) {
    if(won == "row") return ILLEGAL;
    won = "row";
    winner = temp;
  }
  temp = check(a,0,0,1,0,2,0);
  if(temp != 0) {
    won = "column";
    winner = temp;
  }
  temp = check(a,0,1,1,1,2,1);
  if(temp != 0) {
    if(won == "column") return ILLEGAL;
    won = "column";
    winner = temp;
  }
  temp = check(a,0,2,1,2,2,2);
  if(temp != 0) {
    if(won == "column") return ILLEGAL;
    won = "column";
    winner = temp;
  }
  temp = check(a,0,0,1,1,2,2);
  if(temp != 0) {
    //if(won) return ILLEGAL;
    won = true;
    winner = temp;
  }
  temp = check(a,2,0,1,1,0,2);
  if(temp != 0) {
    //if(won) return ILLEGAL;
    won = true;
    winner = temp;
  }
  if(won != "") return winner;
  return 0;
}

int difference(char a[3][3]) {
  int p1_count=0,p2_count=0;
  for(int i=0; i<GRID_SIZE; ++i) {
    for(int j=0; j<GRID_SIZE; ++j) {
      if (a[i][j] == 'X') ++p1_count;
      else if(a[i][j] == '0') ++p2_count;
    }
  }
  return p1_count - p2_count;
}

int totalmoves(char a[3][3]) {
  int count=0;
  for(int i=0; i<GRID_SIZE; ++i) {
    for(int j=0; j<GRID_SIZE; ++j) {
      if ((a[i][j] == 'X') || (a[i][j] == '0')) ++count;
    }
  }
  return count;
}

int main() {
  char a[GRID_SIZE][GRID_SIZE];
  for(int i=0; i<GRID_SIZE; ++i) {
    for(int j=0; j<GRID_SIZE; ++j) {
      std::cin >> a[i][j];
    }
  }
  int x1 = difference(a);
  if((x1 != 0) && (x1 != 1)) {
    std::cout << "illegal\n";
    return 0;
  }
  int x2 = winner(a);
  if(x2 == ILLEGAL) {
    std::cout << "illegal\n";
    return 0;
  }
  if(x2==1) {
    if(x1 == 0) std::cout << "illegal\n";
    else std::cout << "the first player won\n";
    return 0;
  }
  if(x2==2) {
    if(x1 == 1) std::cout << "illegal\n";
    else std::cout << "the second player won\n";
    return 0;
  }
  if(totalmoves(a) == 9) {
    std::cout << "draw\n";
    return 0;
  }
  if(x1 == 0) {
    std::cout << "first\n";
    return 0;
  }
  if(x1 == 1) {
    std::cout << "second\n";
    return 0;
  }
}
