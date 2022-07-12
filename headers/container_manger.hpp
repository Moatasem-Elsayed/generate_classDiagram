
#ifndef _CONT_MANG_H
#define _CONT_MANG_H
#include "sstream"

#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <stdint.h>
#include "file_control.hpp"
#include <vector>
class ContainerManger : public FileControl
{
private:
    std::vector<std::string> m_class_database;

public:
    enum ContainerName
    {
        Class = 1,
        Interface,
        Struct,
        Enum,
    };
    ContainerManger(std::string filename);
    void create_class(ContainerName containertype);
    void add_attr();
    void add_operations();
    void class_finalize();
};
#endif