#include <iostream>

int main() {
  int p, q, l, r;
  std::cin >> p >> q >> l >> r;
  int *a = new int[p], *b = new int[p], *c = new int[q], *d = new int[q];
  for(int i = 0; i < p; ++i) {
    std::cin >> a[i] >> b[i];
  }
  for(int i = 0; i < q; ++i) {
    std::cin >> c[i] >> d[i];
  }
  int i, j, k, count = 0;
  bool found1, found2, found_final;
  for(i = l; i <= r; ++i) {
    found_final = false;
    for(j = a[0]; j <= b[p - 1]; ++j) {
      found1 = false;
      found2 = false;
      for(k = 0; k < p; ++k) {
        if((a[k] <= j) && (j <= b[k])) {
          found1 = true;
          break;
        }
      }
      for(k = 0; k < q; ++k) {
        if((c[k] + i <= j) && (j <= d[k] + i)) {
          found2 = true;
          break;
        }
      }
      if(found1 && found2) {
        found_final = true;
        break;
      }
    }
    if(found_final) {
      ++count;
    }
  }
  std::cout << count << '\n';
}
