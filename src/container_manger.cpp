
#include "container_manger.hpp"
#include <array>
ContainerManger::ContainerManger(std::string filename) : FileControl(filename)
{
}
void ContainerManger::create_class(ContainerName containertype)

{
    std::array<std::string, 4> containers = {
        "class",
        "interface",
        "struct",
        "enum"};
    std::string class_name;
    std::stringstream body;

    body << containers[containertype - 1] << " ";
    File_open();
    std::cout << "please enter class name :  " << std::endl;
    std::cin >> class_name;
    m_class_database.push_back(class_name);
    body << class_name << "{\n"
         << std::endl;
    File_Write(body.str());
    File_close();
}
void ContainerManger::add_attr()
{
    std::string class_attr;
    uint8_t access_option;
    std::stringstream body;
    File_open();
    std::cout << "please enter attribute name :  " << std::endl;
    std::cin >> class_attr;
    std::cout << "is it public attribute  y/n ?  " << std::endl;
    std::cin >> access_option;
    if (access_option == 'y' || access_option == 'Y')
    {
        body << "+" << class_attr << std::endl;
    }
    else
    {
        body << class_attr << std::endl;
    }
    File_Write(body.str());
    File_close();
}
void ContainerManger::add_operations()
{
    std::string class_operation;
    uint8_t access_option;
    std::stringstream body;
    File_open();
    std::cout << "please enter operation name :  " << std::endl;
    std::cin >> class_operation;
    std::cout << "is it public attribute  y/n ?  " << std::endl;
    std::cin >> access_option;
    if (access_option == 'y' || access_option == 'Y')
    {
        body << "+" << class_operation << std::endl;
    }
    else
    {
        body << class_operation << std::endl;
    }
    File_Write(body.str());
    File_close();
}
void ContainerManger::class_finalize()
{
    std::stringstream body;
    File_open();
    body << "} " << std::endl;
    File_Write(body.str());
    File_close();
}