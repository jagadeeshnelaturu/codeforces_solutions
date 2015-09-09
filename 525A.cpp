#include <iostream>

#define ALPHABET_COUNT 26

int main() {
  int current_req[ALPHABET_COUNT], max_req[ALPHABET_COUNT];
  for(int i=0; i<ALPHABET_COUNT; ++i) {
    current_req[i] = 0;
  }
  for(int i=0; i<ALPHABET_COUNT; ++i) {
    max_req[i] = 0;
  }
  int n;
  std::cin >> n;
  for(int i=0; i<n-1; ++i) {
    char key,lock;
    std::cin >> key >> lock;
    int x1 = key - 'a', x2 = lock - 'A';
    --current_req[x1];
    ++current_req[x2];
    if(current_req[x1] > max_req[x1]) max_req[x1] = current_req[x1];
    if(current_req[x2] > max_req[x2]) max_req[x2] = current_req[x2];
  }
  int sum=0;
  for(int i=0; i<ALPHABET_COUNT; ++i) {
    sum += max_req[i];
  }
  std::cout << sum << '\n';
}
