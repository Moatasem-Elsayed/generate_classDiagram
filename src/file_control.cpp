#include "file_control.hpp"
#include <fstream>

#include <filesystem>
#include <string>
#include <unistd.h>
FileControl::FileControl(std::string filename) : m_filename(filename) {
  // std::cout << "File : " << filename << " start working right now " <<
  // std::endl;
  std::ifstream f(m_filename.c_str());
  if (f.good() != true) {
    std::cout << "create file ->first time " << std::endl;
    File_open();
    File_Write("@startuml\n");
    File_close();
  }
}

void FileControl::File_open() { m_Filefile.open(m_filename, std::ios::app); }
void FileControl::File_Write(std::string message) { m_Filefile << message; }
void FileControl::File_close() { m_Filefile.close(); }
void FileControl::File_clear() {
  m_Filefile.open(m_filename, std::ios::out | std::ios::trunc);
  m_Filefile << "";
  m_Filefile.close();
}

void FileControl::File_generate_png() {
  // std::string command="java -jar ../plantuml.jar "+m_filename;
  // std::cout<<command<<std::endl;
  // system(command.c_str());

  std::string command = "java -jar ../plantuml.jar " + m_filename;
  FILE *fp = popen(command.c_str(), "r");
  if (fp == nullptr) {
    std::cerr << "Failed to run command check you have java\n";
    return;
  }
  pclose(fp);
}
FileControl::~FileControl() {}