#include "file_control.hpp"
#include <fstream>
FileControl::FileControl(std::string filename) : m_filename(filename)
{
    // std::cout << "File : " << filename << " start working right now " << std::endl;
    std::ifstream f(m_filename.c_str());
    if (f.good() != true)
    {
        std::cout << "create file ->first time " << std::endl;
        File_open();
        File_Write("@startuml\n");
        File_close();
    }
}

void FileControl::File_open()
{
    m_Filefile.open(m_filename, std::ios::app);
}
void FileControl::File_Write(std::string message)
{
    m_Filefile << message;
}
void FileControl::File_close()
{
    m_Filefile.close();
}
void FileControl::File_clear(){
    m_Filefile.open(m_filename, std::ios::out | std::ios::trunc);
    m_Filefile<<"";
    m_Filefile.close();
}
FileControl::~FileControl()
{

}