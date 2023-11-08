#include <iostream>

int main()
{
  //  && = check if two conditions are true
  // || = check if at least one of the two conditions is true
  // ! = reverse the logical state of its operand

  int temp;
  bool sunny = false;

  std::cout << "Enter the tempurature: ";
  std::cin >> temp;

  // (temp > 0 && temp < 30) ? std::cout << "The tempurature is good!" << std::endl : std::cout << "The tempurature is bad!" << std::endl;
  (temp <= 0 || temp >= 30) ? std::cout << "The tempurature is bad!" << std::endl : std::cout << "The tempurature is good!" << std::endl;
  std::cout << (!sunny ? "It is cloudy outside!" : "It is sunny outside!") << std::endl;
}
