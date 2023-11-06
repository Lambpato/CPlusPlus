#include <iostream>
#include <vector>

typedef std::string text_t;
typedef int number_t;

using txt_t = std::string;
using num_t = int;

int main()
{
  // typedef = resereved keyword used to create additonal name
  // (alias) for another data type.
  // New identifier for an existing type
  // Helps with readability and reduce typos
  // Use when there is a clear benefit
  // Replace with 'using' (work better w/ templates)

  text_t firstName = "Lamberto";
  number_t age = 21;
  txt_t lastName = "Martinez";
  num_t bank = 0;

  std::cout << firstName << std::endl;
  std::cout << lastName << std::endl;
  std::cout << age << std::endl;
  std::cout << bank << std::endl;

  return 0;
}
