#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <experimental/filesystem>
#include <unistd.h>
#include "UI_Manger.hpp"
#include "service_manager.hpp"
int main()
{
    ServiceManger l_servicemanger;
    while (1)
    {
        l_servicemanger.start_task();
    }
    return 0;
}