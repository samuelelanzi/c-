#include <iostream>
#include <array>
#include <deque>
#include <vector>

template<typename Container, typename Index>
auto authAndAccess(Container& c, Index i) -> decltype(c[i]) {
  return c[i];
}
 
int main() {
  std::array<int, 5> a {0, 1, 2, 3, 4};
  std::vector<int> v {0, 1, 2, 3, 4};
  std::deque<int> d {0, 1, 2, 3, 4};

  for(int i = 0; i != 5; ++i) {
    std::cout << authAndAccess(a, i) << ' '
              << authAndAccess(a, i) << ' '
              << authAndAccess(a, i) << '\n';
  }
}