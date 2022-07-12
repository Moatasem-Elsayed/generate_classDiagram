
#ifndef _SERV_MANG_H
#define _SERV_MANG_H

#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <stdint.h>
#include "UI_Manger.hpp"
#include "container_manger.hpp"
#include <memory>

#define GENERATION_NAME "test.puml"
class ServiceManger
{
private:
    UIManger m_uimanger;
    std::shared_ptr<ContainerManger> m_pcontrolmanger;

public:
    ServiceManger();
    void start_task();
};
#endif