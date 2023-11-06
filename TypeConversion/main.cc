#include <iostream>

int main()
{
  // type conversion = conversion a value of one data type to another
  // Implicit = automatic
  // Explicit = Precode value with new data type (int)

  double x = (int)3.14;
  char y = 100;
  int correct = 8;
  int questions = 10;

  // utilize type conversion when working with initiger division

  double score = correct / (double)questions * 100;

  std::cout << x << std::endl;
  std::cout << y << std::endl;
  std::cout << (char)69 << std::endl;
  std::cout << score << "%" << std::endl;

  return 0;
}
