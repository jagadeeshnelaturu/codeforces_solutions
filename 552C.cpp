#include <iostream>
#include <vector>

int main() {
  int w, m;
  std::cin >> w >> m;
  if((w == 2) || (w == 3)) {
    std::cout << "YES\n";
    return 0;
  }
  std::vector<int> mBaseW;
  while(m != 0) {
    mBaseW.push_back(m % w);
    m /= w;
  }
  int size = mBaseW.size(), temp;
  bool find9 = false, found1 = false;
  for(int i = size - 1; i >= 0; --i) {
    temp = mBaseW[i];
    if(temp == 0) {
      found1 = false;
      if(find9) {
        std::cout << "NO\n";
        return 0;
      }
    }
    else if(temp == 1) {
      found1 = true;
      if(find9) {
        std::cout << "NO\n";
        return 0;
      }
    }
    else if(temp == w - 1) {
      if(found1) {
        std::cout << "NO\n";
        return 0;
      }
      find9 = false;
    }
    else if(temp == w - 2) {
      if(found1) {
        std::cout << "NO\n";
        return 0;
      }
      find9 = true;
    }
    else {
      std::cout << "NO\n";
      return 0;
    }
  }
  std::cout << (find9 ? "NO" : "YES") << '\n';
}
