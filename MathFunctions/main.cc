#include <iostream>
#include <cmath> // math functions

// for more functions cplusplus.com/reference/cmath/

int main()
{
  double x = 3.14;
  double y = 4;
  double max;
  double min;
  double power;
  double sqroot;
  double absolute;
  double rnd;
  double rndUp;
  double rndDown;

  max = std::max(x, y); // this will display the greater number
  min = std::min(x, y); // this will display the smaller number
  power = pow(2, 4);    // to the power
  sqroot = sqrt(9);     // sqaure root
  absolute = abs(-3);   // absolute value
  rnd = round(x);       // round the number
  rndUp = ceil(x);      // round up
  rndDown = floor(x);   // round down

  std::cout << max << std::endl;
  std::cout << min << std::endl;
  std::cout << power << std::endl;
  std::cout << sqroot << std::endl;
  std::cout << absolute << std::endl;
  std::cout << rnd << std::endl;
  std::cout << rndUp << std::endl;
  std::cout << rndDown << std::endl;

  return 0;
}
