#include <iostream>

int main() {
  int x1 = 27;      // C++98
  int x2(27);       // C++98
  int x3 = { 27 };  // C++11
  int x4 { 27 };    // C++11

  // ATTENZIONE le prime due istruzioni dichiarano una variabile di tipo int con valore 27
  // le altre due sono di tipo std::initializer_list<int>

  auto y1 = 27;
  auto y2(27);
  auto y3 = { 27 };        // std::initializer_list<int>
  auto y4{ 27 };           // idem

  auto x = { 11, 23, 9 };  // e' di tipo std::initializer_list<int>
}

// Qui sono riportate le differenze che intercorrono tra deduzione attraverso un template 
// ed auto. Per auto l'inizializzazione per graffe non sempre rappresenta il tipo voluto