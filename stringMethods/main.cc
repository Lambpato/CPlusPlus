#include <iostream>

// further methods cplusplus.com/reference/string/string/

int main()
{
  std::string name;

  std::cout << "Enter your name: ";
  std::getline(std::cin, name);

  if (name.empty())
  {
    std::cout << "You didn't enter your name" << std::endl;
  }
  else
  {
    if (name.length() >= 12)
    {
      std::cout << "Long ass fucking name" << std::endl;
    }

    else
    {
      std::cout << "Normal name" << std::endl;
    }
  }

  name.append("@gmail.com");

  std::cout << "Your email will be " << name << std::endl;
  std::cout << name.at(0) << std::endl;

  name.insert(0, "@");
  name.erase(9, 18);

  std::cout << name << std::endl;

  // name.clear() will clear the value of name

  std::cout << name.find('L') << std::endl;

  return 0;
}
