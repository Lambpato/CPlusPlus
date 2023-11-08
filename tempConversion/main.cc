#include <iostream>

int main()
{
  double temp;
  char unit;

  std::cout << "*** Temperature Conversion ***" << std::endl;
  std::cout << "F = Fahrenheit" << std::endl;
  std::cout << "C = Celsius" << std::endl;
  std::cout << "What unit would you like to convert to: ";
  std::cin >> unit;

  if ('F' || 'f')
  {
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> temp;

    temp = (1.8 * temp) + 32.0;
    std::cout << "Temperature is: " << temp << "F" << std::endl;
  }
  else if ('C' || 'c')
  {
    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> temp;

    temp = (temp - 32) / 1.8;
    std::cout << "Temperature is: " << temp << "C" << std::endl;
  }
  else
  {
    std::cout << "Please enter in only C of F" << std::endl;
  }

  std::cout << "******************************" << std::endl;

  return 0;
}
