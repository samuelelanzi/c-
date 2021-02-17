#include <iostream>

template<typename T>
void fn(const T& param) {
  std::cout << param << '\n';
}

int main() {
  int i = 0;
  double d = 0.;
  float f = 0.;
  std::string s = "0";
  char c = '0';
  bool b = 0;

  fn(i); 
  fn(d); 
  fn(f); 
  fn(s); 
  fn(c); 
  fn(b);
}
