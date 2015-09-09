#include <iostream>

int* calcGridMax(bool** vals, int n, int m) {
  int* maxima = new int[n];
  int currentmax, currentcount;
  for(int i = 0; i < n; ++i) {
    currentcount = vals[i][0];
    currentmax = currentcount;
    for(int j = 1; j < m; ++j) {
      if(vals[i][j]) ++currentcount;
      else {
        currentmax = std::max(currentmax, currentcount);
        currentcount = 0;
      }
    }
    currentmax = std::max(currentmax, currentcount);
    maxima[i] = currentmax;
  }
  return maxima;
}

int calcRowMax(bool* vals, int m) {
  for(int i = 0; i < m; ++i) {
    //std::cout << vals[i] << " ";
  }
  //std::cout << ": Arguments for calcRowMax\n";
  int currentcount = vals[0], currentmax = currentcount;
  for(int i = 1; i < m; ++i) {
    if(vals[i]) ++currentcount;
    else {
      currentmax = std::max(currentmax, currentcount);
      currentcount = 0;
    }
  }
  currentmax = std::max(currentmax, currentcount);
  //std::cout << "Returning " << currentmax << '\n';
  return currentmax;
}

int calc1Max(int* maxima, int n) {
  int maxVal = maxima[0];
  for(int i = 1; i < n; ++i) {
    maxVal = std::max(maxVal, maxima[i]);
  }
  return maxVal;
}

int main() {
  int n, m, q;
  std::cin >> n >> m >> q;
  bool** vals = new bool*[n];
  for(int i = 0; i < n; ++i) {
    vals[i] = new bool[m];
    for(int j = 0; j < m; ++j) {
      std::cin >> vals[i][j];
    }
  }
  int* maxima = calcGridMax(vals, n, m);
  int x, y;
  while(q--) {
    std::cin >> x >> y;
    vals[x - 1][y - 1] = !vals[x - 1][y - 1];
    maxima[x - 1] = calcRowMax(vals[x - 1], m);
    std::cout << calc1Max(maxima, n) << '\n';
  }
}
