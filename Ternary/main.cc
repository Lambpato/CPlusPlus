#include <iostream>

int main()
{
  // ternary operator ?: replacement of if/else statement
  // condition ? expression1 : expression2

  int grade = 75;

  // If statement

  if (grade >= 60)
  {
    std::cout << "You pass!" << std::endl;
  }
  else
  {
    std::cout << "You fail!" << std::endl;
  }

  //  Ternary

  grade >= 60 ? std::cout << "You pass!" << std::endl : std::cout << "You fail!" << std::endl;

  int number = 9;

  number % 2 ? std::cout << "ODD" << std::endl : std::cout << "EVEN" << std::endl;

  bool hungry = true;

  hungry ? std::cout << "You are hungry" << std::endl : std::cout << "You are full" << std::endl;
  std::cout << (hungry ? "You are hungry" : "You are full") << std::endl;

  return 0;
}
