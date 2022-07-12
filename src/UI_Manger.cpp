#include "UI_Manger.hpp"
void UIManger::reset_screen()
{
#ifdef CLEAR
#ifdef __linux__
    std::system("clear");
#else
    std::system("cls");
#endif
#endif
}
void UIManger::hello_message()
{
    reset_screen();
    std::cout << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Generator for class Diagram , let's play" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;
}
uint8_t UIManger::menu_homewidget()
{
    uint8_t number;
    reset_screen();
    std::cout << "1-Create Container " << std::endl;
    std::cout << "2-Add Relationship" << std::endl;
    std::cout << "E/e Exit " << std::endl;
    std::cout << " please select the task Number : ";
    std::cin >> number;
    return number;
}
uint8_t UIManger::menu_createwidget()
{
    uint8_t number;
    reset_screen();
    std::cout << "1-Create class " << std::endl;
    std::cout << "2-create interface" << std::endl;
    std::cout << "3-create struct" << std::endl;
    std::cout << "4-create enum" << std::endl;
    std::cout << " please select the task Number : ";
    std::cin >> number;
    return number;
}
uint8_t UIManger::menu_addwidget()
{
    uint8_t number;
    reset_screen();
    std::cout << "1-add attribute " << std::endl;
    std::cout << "2-add operation" << std::endl;
    std::cout << "e/E for Exit" << std::endl;
    std::cout << " please select the task Number : ";
    std::cin >> number;
    return number;
}
uint8_t UIManger::menu_relationwidget() {}