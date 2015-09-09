#include <iostream>

int search(int temp, int* counts, int left, int right) {
  int mid;
  while(true) {
    mid = (left + right) / 2;
    if((counts[mid] >= temp) && ((mid == 0) || (counts[mid - 1] <  temp))) return mid;
    else if(counts[mid] < temp) {
      if(right - left == 1) {
        left = right;
      }
      else {
        left = mid;
      }
    }
    else if(counts[mid] > temp) {
      right = mid;
    }
  }
}

int main() {
  int n;
  std::cin >> n;
  int* counts = new int[n];
  int temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    counts[i] = temp + ((i != 0) ? counts[i - 1] : 0);
  }
  int m;
  std::cin >> m;
  while(m--) {
    std::cin >> temp;
    std::cout << search(temp, counts, 0, n - 1) + 1<< '\n';
  }
}
