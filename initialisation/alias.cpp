#include <unordered_map>
#include <memory>
#include <iostream>
#include <type_traits>
#include <list>

// template<typename T>
// using MyAllocList = std::list<T, MyAlloc<T>>;  // C++11

// template<typename T>
// struct MyAllocList {
//   typedef std::list<T, MyAlloc<T>> type;       // C++98
// };

int main()
{
  typedef std::unique_ptr<std::unordered_map<std::string, std::string>> UPtrMapSS98;   // C++98
  using UPtrMapSS11 = std::unique_ptr<std::unordered_map<std::string, std::string>>;   // C++11
 
  using type1 = std::remove_const<const int>::type;
  std::cout << "test1 " << (std::is_same<int, type1>::value ? "passed" : "failed") << '\n';
}