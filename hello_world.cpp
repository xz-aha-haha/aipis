#include <iostream>
#include <string>

// Главная функция - точка входа в программу
int main()
{
    std::string name; // Переменная для хранения имени пользователя

    // Запрашиваем ввод от пользователя
    std::cout << "Enter your name: ";
    std::cin >> name; // Читаем ввод пользователя

    // Выводим приветственное сообщение
    std::cout << "Hello world from " << name << std::endl;

    return 0; // Программа завершена успешно
}