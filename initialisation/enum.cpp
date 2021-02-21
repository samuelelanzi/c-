#include <iostream>
#include <cstdlib>
#include <tuple>

int main() 
{
  // enum Color {yellow, red, blue}; // C++98
  // auto yellow = false;            // ERRORE GIA ESISTE NELLO SCOPE

  enum class Color {yellow, red, blue}; // C++11
  auto yellow = false; // OK
  Color t = Color::yellow; // OK

  enum Status98 {
    good98 = 0,
    failed98 = 1,
    incomplete98 = 100,
    corrupt98 = 200,
    indeterminate98 = 0xFFFFFFFF
  };

  enum class Status11 : std::uint_fast32_t {
    good = 0,
    failed = 1,
    incomplete = 100,
    corrupt = 200,
    indeterminate = 0xFFFFFFFF
  };

  using UserInfo = std::tuple<std::string, std::string, std::size_t>;
  UserInfo uInfo {"samuelelanzi", "samuelelanzi00@icloud.com", 2};

  auto username = std::get<0>(uInfo);
  auto email = std::get<1>(uInfo);
  auto reputation = std::get<2>(uInfo);

  std::cout << "username: " << username 
            << "\nemail: " << email 
            << "\nreputation: " << reputation << '\n';

  
}