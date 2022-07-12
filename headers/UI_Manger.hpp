
#ifndef _UI_MANG_H
#define _UI_MANG_H

#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <stdint.h>
#define CLEAR 1
class UIManger
{
private:
    void reset_screen();

public:
    void hello_message();
    uint8_t menu_homewidget();
    uint8_t menu_createwidget();
    uint8_t menu_addwidget();
    uint8_t menu_relationwidget();
};
#endif