#include <iostream>

int main(){
    // Объявляем переменную дл имени пользователя
    std::string name;
    std::cout << "Enter your name: ";
    // Считываем и сохраняем имя
    std::cin >> name;
    // Выводим сообщение
    std::cout << "Hello, " + name + "!" << std::endl;
    return 0;
}