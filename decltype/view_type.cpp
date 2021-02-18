#include <iostream>

int main() {
  const int theAnswer = 42;
  auto x = theAnswer;
  auto y = &theAnswer;
  std::cout << typeid(x).name() << '\n';
  std::cout << typeid(y).name() << '\n';
}