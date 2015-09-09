#include <iostream>
#include <cstdio>
#include <cmath>

#define ERROR_MARGIN 0.01
#define PI 3.14159265358979

double sidelength(double x1,double y1,double x2,double y2) {
  return pow(pow(x1-x2,2) + pow(y1-y2,2), 0.5);
}

double angle(double a,double b,double c) {
  return acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
}

bool isInteger(double f,double margin) {
  double x = f-(int)f;
  return ((x <= margin) || (x >= 1-margin));
} 

int findNoOfSides(double a,double b,double c) {
  double x,y,z;
  int i;
  for(i=3;i<100;++i) {
    x = i*a/PI;
    y = i*b/PI;
    z = i*c/PI;
    if(isInteger(x,ERROR_MARGIN) &&
       isInteger(y,ERROR_MARGIN) &&
       isInteger(z,ERROR_MARGIN)) {
      break;
    }
  }
  return i;
}

int main() {
  double x1,y1,x2,y2,x3,y3;
  std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  double a,b,c;
  a=sidelength(x1,y1,x2,y2);
  b=sidelength(x2,y2,x3,y3);
  c=sidelength(x3,y3,x1,y1);
  double angleA,angleB,angleC;
  angleA = angle(a,b,c);
  angleB = angle(b,c,a);
  angleC = angle(c,a,b);
  double circumradius = a/(2*sin(angleA));
  //2*angleA,2*angleB,2*angleC are angles at center => multiples of 2*PI/n
  //find least n such that nX/PI is an integer for X=angleA,angleB,angleC
  int n = findNoOfSides(angleA,angleB,angleC);
  double area =n*pow(circumradius,2)*sin(2*PI/n)/2;
  //std::cout << area << '\n';
  printf("%f\n",area);
}
