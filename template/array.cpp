#include <iostream>
#include <array>

template <typename T>
void f(T& param) {
  std::cout << param << '\n';
}

template<typename T, std::size_t N>
constexpr std::size_t arraySize(T (&)[N]) noexcept { return N; }

int main() {
  // ARRAY DECADE IN UN PUNTATORE AL PRIMO ELELMENTO
  const char name[] = "Samuele";
  const char* ptrToName = name;
  std::cout << ptrToName << '\n';

  // CHIAMATA DI FUNZIONE
  f(name);

  // FUNZIONE arraySize()
  int keyVals[] = { 1, 3, 7, 9, 11, 22, 35 };
  std::array<int, arraySize(keyVals)> mappedVals {};
  for(auto i : mappedVals) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
}