#include <iostream>

int main()
{
  // integer (whole number)
  int age = 21;
  int year = 2023;
  int days = 7;

  // doubel (numebr including decimal)
  double price = 10.99;
  double gpa = 2.5;
  double temperature = 25.1;

  // char (single character)
  char grade = 'A';
  char initial = 'L';
  char currency = '$';

  // boolean (true or false)
  bool student = true;
  bool power = true;
  bool forSale = false;

  // string (objects that represents a sequence of text)
  std::string name = "Lamberto";
  std::string day = "Friday";
  std::string food = "Tacos";
  std::string address = "42069 Bounce Dat Ass St.";

  // string literals
  std::cout << "Hello " << name << std::endl;
  std::cout << "You are " << age << " years old" << std::endl;

  return 0;
}
