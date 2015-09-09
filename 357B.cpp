#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  int *colors = new int[n];
  for(int i = 0; i < n; ++i) {
    colors[i] = 0;
  }
  int temp1, temp2, temp3;
  while(m--) {
    std::cin >> temp1 >> temp2 >> temp3;
    --temp1;
    --temp2;
    --temp3;
    if(colors[temp1]) {
      switch(colors[temp1]) {
       case 1:
        colors[temp2] = 2;
        colors[temp3] = 3;
        break;
       case 2:
        colors[temp2] = 1;
        colors[temp3] = 3;
        break;
       case 3:
        colors[temp2] = 2;
        colors[temp3] = 1;
        break;
      }
    }
    else if(colors[temp2]) {
      switch(colors[temp2]) {
       case 1:
        colors[temp1] = 2;
        colors[temp3] = 3;
        break;
       case 2:
        colors[temp1] = 1;
        colors[temp3] = 3;
        break;
       case 3:
        colors[temp1] = 2;
        colors[temp3] = 1;
        break;
      }
    }
    else if(colors[temp3]) {
      switch(colors[temp3]) {
       case 1:
        colors[temp2] = 2;
        colors[temp1] = 3;
        break;
       case 2:
        colors[temp2] = 1;
        colors[temp1] = 3;
        break;
       case 3:
        colors[temp2] = 2;
        colors[temp1] = 1;
        break;
      }
    }
    else {
      colors[temp1] = 1;
      colors[temp2] = 2;
      colors[temp3] = 3;
    }
  }
  for(int i = 0; i < n; ++i) {
    std::cout << colors[i] << ' ';
  }
  std::cout << '\n';
}
