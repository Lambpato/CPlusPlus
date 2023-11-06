#include <iostream>

int main()
{
  // The const keyword specifies that a variable's value is constant
  // tells the compliner to prevent anything from modifying it
  // (read only)
  const double PI = 3.14159;
  const double RADIUS = 10;
  const double CIRCUMFERENCE = 2 * PI * RADIUS;

  std::cout << CIRCUMFERENCE << " cm" << std::endl;

  return 0;
}
