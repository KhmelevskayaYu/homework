#include <iostream> //some includes
#include <string>

int
main()
{                                                        // function main
  std::string name;                                      // string variable
  getline(std::cin, name);                               // username promt
  std::cout << "Hello world from " << name << std::endl; // printing message
  return 0;
}