#ifndef _FILE_CONTROL_H_
#define _FILE_CONTROL_H_
#include <iostream>
#include <string>
#include <ostream>
#include <fstream>
class FileControl
{
protected:
    FileControl() = default;
    FileControl(std::string filename);
    void File_open();
    void File_Write(std::string message);
    void File_close();
    void File_clear();
    // friend std::ostream &operator<<(std::ostream &out, std::string);
    ~FileControl();

private:
    std::string m_filename;
    std::ofstream m_Filefile;
};
#endif