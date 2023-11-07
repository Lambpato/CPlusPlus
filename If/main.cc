#include <iostream>

int main()
{
  // if statements = do something if a condition is true.
  // if not, then dont do it

  int age;

  std::cout << "Enter your age: ";
  std::cin >> age;

  if (age >= 100)
  {
    std::cout << "Get yo old ass in a retirement home." << std::endl;
  }
  else if (age >= 18)
  {
    std::cout << "Yea you can drive." << std::endl;
  }
  else if (age < 0)
  {
    std::cout << "You not even born yet." << std::endl;
  }
  else
  {
    std::cout << "Yo ass can't drive." << std::endl;
  }

  return 0;
}
