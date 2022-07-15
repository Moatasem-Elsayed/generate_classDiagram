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
uint8_t UIManger::menu_relation_widget() {
    uint8_t number;
    reset_screen();
    std::cout << "1-Association Relationship " << std::endl;
    std::cout << "2-Direct Association Relationship" << std::endl;
    std::cout << "3-Inheritance Relationship" << std::endl;
    std::cout << "4-Composition Relationship" << std::endl;
    std::cout << "5-Aggregation Relationship" << std::endl;
    std::cout << " please select the Relationship type Number : ";
    std::cin >> number;
    return number;
}

std::vector<std::string> UIManger::relation_Classes_widget(){
    std::string classTemp;
    std::vector<std::string>relation_classes;
    reset_screen();
    std::cout << " please enter first container name " << std::endl;
    std::cin >> classTemp;
    relation_classes.push_back(classTemp);
    std::cout << " please enter second container name " << std::endl;
    std::cin >> classTemp;
    relation_classes.push_back(classTemp);
    
    return relation_classes;
}

uint8_t UIManger::menu_relation_Direction_widget(){
    uint8_t number;
    reset_screen();
    std::cout << "1-left " << std::endl;
    std::cout << "2-right " << std::endl;
    std::cout << "3-up " << std::endl;
    std::cout << "4-down " << std::endl;
    std::cout << " please select the direction of relation : ";
    std::cin >> number;
    return number;   
}

std::string UIManger::relation_label_widget(){
    std::string label=" ";
    std::string input="";
    reset_screen();
    std::cout << " please enter label relationship or press 'n' if you don't want label" << std::endl;
    std::cin >> input;
    if(input=="n"){

    }else{
        label+=": "+input+" ";
    }
    return label;   
}