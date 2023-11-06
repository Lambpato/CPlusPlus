#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{

  std::string name;
  int age;

  std::cout << "What's your age?: ";
  std::cin >> age;

  // if a cin is above a getline, add std::ws to remove any whitespace following after the cin above

  std::cout << "What's your full name?: ";
  std::getline(std::cin >> std::ws, name); // utilize getline if the input is expected any whitespace

  std::cout << "Hello " << name << std::endl;
  std::cout << "You are " << age << " years old" << std::endl;

  return 0;
}
