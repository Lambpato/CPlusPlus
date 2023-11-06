#include <iostream>

int main()
{
  // arithmetic operators = return the result of a soecific
  // arithmetic operation (+ - * /)

  // Order Of Operations
  // Parenthesis
  // Multiplicaiton and Division
  // Addition and Subtraction

  int students = 20;

  int formula = 6 - 5 + 4 * 3 / 2;

  // addition

  // students = students + 1;
  // students += 1;
  // students++; only use to incrememnt by one

  // subtraction

  // students = students - 1;
  // students -= 1;
  // students--; only use to decrememnt by one

  // multiplication

  // students = students * 2;
  // students *= 2;

  // division

  // students = students / 2;
  // students /= 2;

  int remainder = students % 3;

  std::cout << students << std::endl;
  std::cout << remainder << std::endl;
  std::cout << formula << std::endl;

  return 0;
}
