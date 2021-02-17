#include <iostream>

void someFunc(int, double);

template <typename T>
void f1(T param);

template <typename T>
void f2(T& param);

int main() {
  f1(someFunc);
  f2(someFunc);
}