#include <iostream>
#include <string>
#include <windows.h>
#include "Name.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name;
    std::cout << "¬ведите им€: ";
    std::cin >> name;

    DynamicName::Leaver leaver;
    std::cout << leaver.leave(name) << std::endl;

    return 0;
}
