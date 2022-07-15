#include"relation_manger.hpp"
#include<sstream>
#include<array>
RelationManger::RelationManger(std::string filename):FileControl(filename){

}
void RelationManger::create_relations(){
    File_open();
    File_Write("' Relation\n");
    File_close();
}
void RelationManger::add_relation(std::vector<std::string>classesNames,uint8_t direction,uint8_t relationType,std::string label){           
    std::string types_start=" -";

    std::array<std::string,5>types_end={
        "- ",
        "-> ",
        "-|> ",
        "-* ",
        "-o "
    };
    std::array<std::string,4>directions_list={
        "l",
        "r",
        "u",
        "d"
    };
    std::stringstream body;
    body<<classesNames[0]
        <<(std::string)types_start
        <<(std::string)directions_list.at(direction-1 -48)
        <<(std::string)types_end[relationType-1 -48]
        <<(std::string)classesNames[1]
        <<label
        <<std::endl;
        
    File_open();
    File_Write(body.str());
    File_close();
}
RelationManger::~RelationManger()
{
    File_open();
    File_Write("\n@enduml\n");
    File_close();
}