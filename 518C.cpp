#include <iostream>

void reorder(int* a, int* p, int position) {
  if(position == 0) return;
  int idCurrent = a[position], idPrevious = a[position-1];
  a[position] = a[position] + a[position-1] - (a[position-1] = a[position]);
  --p[idCurrent];
  ++p[idPrevious];
}

int main() {
  int n,m,k;
  std::cin >> n >> m >> k;
  int* arrangement = new int[n];
  int* positions = new int[n];
  for(int i=0; i<n; ++i) {
    int j;
    std::cin >> j;
    arrangement[i] = j-1;
    positions[j-1] = i;
  }
  long long int numberOfGestures=0;
  while(m--) {
    int id;
    std::cin >> id;
    int pos = positions[id-1];
    numberOfGestures += (pos/k)+1;
    reorder(arrangement,positions,pos);
  }
  std::cout << numberOfGestures << '\n';
  delete[] arrangement;
  arrangement = NULL;
  delete[] positions;
  positions = NULL;
}
