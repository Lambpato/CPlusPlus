#include <iostream>

int main()
{
  char grade;

  std::cout << "What letter grade?: ";
  std::cin >> grade;

  switch (grade)
  {
  case 'A':
    std::cout << "GOOD FUCKING SHIT!" << std::endl;
    break;
  case 'B':
    std::cout << "You can do better buddy." << std::endl;
    break;
  case 'C':
    std::cout << "Do you even give a shit?" << std::endl;
    break;
  case 'D':
    std::cout << "Might as well fail dumbass" << std::endl;
    break;
  case 'F':
    std::cout << "Start looking into trade school you useless dumbfuck" << std::endl;
    break;
  default:
    std::cout << "Please only enter in a latter grade (A-F)" << std::endl;
  }

  return 0;
}
