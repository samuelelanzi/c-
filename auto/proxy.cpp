#include <iostream>
#include <vector>

struct Widget
{
  int w1;
  int w2;
};

std::vector<bool> features(const Widget& w);

int main() 
{
  Widget w;
  // bool highPriority = features(w)[5];
  auto highPriority = features(w)[5]; 
  // std::cout << typeid(highPriority) << '\n'; ERROR

  // crea prpblemi con il tipo bool: restituisce un tipo std::vector<bool>::reference
  // La classe std::vector<bool>::reference E' UNA CLASSE PROXY che simula il 
  // comportamento di un altro tipo di dato
  // Per risolvere il problema e' utile introdurre lo STATIC_CAST
}