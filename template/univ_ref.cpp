template<typename T>
void f(T&& param);          // param e' ora un riferimento universale

int main() {
  int x = 27;               // come prima
  const int cx = x;         // come prima
  const int& rx = x;        // come prima

  f(x);                     // x e' lvalue, pertanto T = int& il tipo di param e' anch'esso int&
  f(cx);                    // cx e' lvalue, pertanto T = const int& il tipo di param e' anch'esso const int&
  f(rx);                    // rx e' lvalue, pertanto T = const int& il tipo di param e' anch'esso const int&
  f(27);                    // 27 e' un rvalue pertanto T = int il tipo di param e' invece int&&
}