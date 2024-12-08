#include <iostream>

int main(){
    // Объявляем переменную для имени пользователя
    std::string name;
    std::cout << "Enter your name: ";
    // Запрашиваем имя пользователя
    std::cin >> name;
    // Выводим сообщение с именем пользователя
    std::cout << "Hello, " + name + "!" << std::endl;
    return 0;
}