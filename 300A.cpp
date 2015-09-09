#include <iostream>
#include <sstream>

int main() {
  int n;
  std::cin >> n;
  int* vals = new int[n];
  bool positiveExists = false;
  int positiveIndex;
  for(int i = 0; i < n; ++i) {
    std::cin >> vals[i];
    if(vals[i] > 0) {
      positiveExists = true;
    }
  }
  std::string s1 = "", s2 = "", s3 = "";
  std::stringstream temp;
  if(positiveExists) {
    s1 += "1 ";
    s2 += "1 ";
    temp << n - 2;
    s3 += temp.str() + " ";
    bool negativeWritten = false, positiveWritten = false;
    for(int i = 0; i < n; ++i) {
      temp.str(std::string()); //to empty temp
      if((vals[i] < 0) && !negativeWritten) {
        temp << vals[i];
        s1 += temp.str() + " ";
        negativeWritten = true;
      }
      else if((vals[i] > 0) && !positiveWritten) {
        temp << vals[i];
        s2 += temp.str() + " ";
        positiveWritten = true;
      }
      else {
        temp << vals[i];
        s3 += temp.str() + " ";
      }
    }
  }
  else {
    s1 += "1 ";
    s2 += "2 ";
    temp << n - 3;
    s3 += temp.str() + " ";
    bool negativeWritten = false;
    int negatives = 0;
    for(int i = 0; i < n; ++i) {
      temp.str(std::string()); //to empty temp
      if((vals[i] < 0) && !negativeWritten) {
        temp << vals[i];
        s1 += temp.str() + " ";
        negativeWritten = true;
      }
      else if((vals[i] < 0) && (negatives < 2)) {
        temp << vals[i];
        s2 += temp.str() + " ";
        ++negatives;
      }
      else {
        temp << vals[i];
        s3 += temp.str() + " ";
      }
    }
  }
  std::cout << s1 << '\n' << s2 << '\n' << s3 << '\n';
}
