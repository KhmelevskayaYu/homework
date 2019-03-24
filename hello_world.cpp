#include <iostream> // Добавляем стандартные библиотеки
#include <string>

int
main()
{                                                        // Функция main
  std::string name;                                      // Переменная для хранения имени пользователя
  getline(std::cin, name);                               // Считываем имя пользователя из потока ввода
  std::cout << "Hello world from " << name << std::endl; // Ввыводим сообщение
  return 0;
}