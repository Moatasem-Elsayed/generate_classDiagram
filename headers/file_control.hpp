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
    // friend std::ostream &operator<<(std::ostream &out, std::string);
    ~FileControl();

private:
    std::string m_filename;
    std::ofstream m_Filefile;
};