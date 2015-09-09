#include <iostream>

char** rotate_clockwise(char** array, int height, int width) {
  char** ret = new char*[width];
  for(int i=0; i<width; ++i) {
    ret[i] = new char[height];
  }
  for(int i=0; i<width; ++i) {
    for(int j=0; j<height; ++j) {
      ret[i][j] = array[height-j-1][i];
    }
  }
  return ret;
}

char** flip_horizontal(char** array, int height, int width) {
  char** ret = new char*[height];
  for(int i=0; i<height; ++i) {
    ret[i] = new char[width];
  }
  for(int i=0; i<height; ++i) {
    for(int j=0; j<width; ++j) {
      ret[i][j] = array[i][width-1-j];
    }
  }
  return ret;
}

char** zoom_in(char** array, int height, int width) {
  char** ret = new char*[2*height];
  for(int i=0; i<2*height; ++i) {
    ret[i] = new char[2*width];
  }
  for(int i=0; i<2*height; ++i) {
    for(int j=0; j<2*width; ++j) {
      ret[i][j] = array[i/2][j/2];
    }
  }
  return ret;

}

void print2d(char** array, int height, int width) {
  for(int i=0; i<height; ++i) {
    for(int j=0; j<width; ++j) {
      std::cout << array[i][j];
    }
    std::cout << '\n';
  }
}

int main() {
  int w,h;
  std::cin >> w >> h;
  char** values = new char*[h];
  for(int i=0; i<h; ++i) {
    values[i] = new char [w];
  }
  for(int i=0; i<h; ++i) {
    for(int j=0; j<w; ++j) {
      std::cin >> values[i][j];
    }
  }
  /*print2d(values,h,w);
  std::cout << "******\n";
  print2d(rotate_clockwise(values,h,w),w,h);
  std::cout << "******\n";
  print2d(flip_horizontal(rotate_clockwise(values,h,w),w,h),w,h);
  std::cout << "******\n";*/
  print2d(zoom_in(flip_horizontal(rotate_clockwise(values,h,w),w,h),w,h),2*w,2*h);
}
