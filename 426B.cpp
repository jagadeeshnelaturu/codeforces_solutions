#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  int **entries = new int*[n];
  for(int i = 0; i < n; ++i) {
    entries[i] = new int[m];
    for(int j = 0; j < m; ++j) {
      std::cin >> entries[i][j];
    }        
  }
  while(n - 1) {
    if(n & 1) {
      break;
    }
    for(int i = 0; i < (n >> 1); ++i) {
      for(int j = 0; j < m; ++j) {
        if(entries[i][j] != entries[n - 1 - i][j]) {
          std::cout << n << '\n';
          return 0;          
        }        
      }      
    }
    n >>= 1;    
  }
  std::cout << n << '\n';  
}
