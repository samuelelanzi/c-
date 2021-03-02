#include <vector>
#include <algorithm>
#include <iostream>

void print(std::vector<int>& v) noexcept
{
  for (auto& i : v) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
}

int main() 
{
  std::vector<int> v;
  print(v);
  std::vector<int> values {1983, 1999, 2000, 2001, 2001};
  print(values);
  std::vector<int>::iterator it = std::find(values.begin(), values.end(), 1983);
  values.insert(it, 1998);
  print(values);
}
