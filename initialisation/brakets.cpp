#include <iostream>
#include <memory>

class Widget {
  int x_ { 0 };
  int y_ = 0;
  // int z_(0); ERRORE

public:
  Widget() { }
  Widget(int x) : x_{ x } { }
  Widget(int i, bool b) { }
  Widget(int i, double d) { }
  Widget(std::initializer_list<long double> i1) { }

  operator float() const;
};

int main() 
{
  Widget w1(10);
  Widget w2();
  Widget w3{};
  Widget w4(10, true);
  Widget w5{10, true};
  Widget w6(10, 5.);
  Widget w7{10, 5.}; // chiama std::initializer_list<long double>
  Widget w8(w7);
  Widget w9{w7};
  Widget w10(std::move(w4));
}