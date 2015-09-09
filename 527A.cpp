#include <iostream>

int main() {
  long long int a,b;
  std::cin >> a >> b;
  long long int count=0;
  while(true) {
    if(b==0) {
      break;
    }
    long long int k=a/b, temp=a%b;
    count += k;
    a = b;    
    b = temp;
  }
  std::cout << count << '\n';
}
