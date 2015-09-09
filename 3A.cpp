#include <iostream>

void modify(int& count, int value, std::string& s1, std::string s2) {
  count += value;
  for(int i=0; i<value; ++i) {
    s1 += s2;
  }
}

int solve(int x1, int y1, int x2, int y2, std::string& s) {
  int count=0;
  while(true) {
    if((x1 == x2) && (y1 == y2)) break;
    else if((x1 == x2) && (y1 < y2)) {
      modify(count, y2-y1, s, "U\n");
      break;
    }
    else if((x1 == x2) && (y1 > y2)) {
      modify(count, y1-y2, s, "D\n");
      break;
    }
    else if((x1 < x2) && (y1 < y2)) {
      int temp = std::min(x2-x1, y2-y1);
      modify(count, temp, s, "RU\n");
      x1 += temp;
      y1 += temp;
    }
    else if((x1 < x2) & (y1 == y2)) {
      modify(count, x2-x1, s, "R\n");
      break;
    }
    else if((x1 < x2) && (y1 > y2)) {
      int temp = std::min(x2-x1,y1-y2);
      modify(count, temp, s, "RD\n");
      x1 += temp;
      y1 -= temp;
    }
    else if((x1 > x2) && (y1 > y2)) {
      int temp = std::min(x1-x2,y1-y2);
      modify(count, temp, s, "LD\n");
      x1 -= temp;
      y1 -= temp;
    }
    else if((x1 > x2) && (y1 < y2)) {
      int temp = std::min(x1-x2, y2-y1);
      modify(count, temp, s, "LU\n");
      x1 -= temp;
      y1 += temp;
    }
    else if((x1 > x2) & (y1 == y2)) {
      modify(count, x1-x2, s, "L\n");
      break;
    }
  }
  return count;
}

int main() {
  char pos_x1,pos_x2;
  int x1,y1,x2,y2;
  std::cin >> pos_x1 >> y1 >> pos_x2 >> y2;
  x1 = pos_x1 - 'a' + 1;
  x2 = pos_x2 - 'a' + 1;
  //std::cout << "(" << x1 << "," << y1 << ")\n(" << x2 << "," << y2 << ")\n";
  std::string s="";
  std::cout << solve(x1,y1,x2,y2,s) << "\n" << s;
}
