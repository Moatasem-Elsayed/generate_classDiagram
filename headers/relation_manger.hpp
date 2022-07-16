#ifndef _RELATION_MANGER_H
#define _RELATION_MANGER_H
#include<file_control.hpp>
#include<vector>
class RelationManger : public FileControl
{
private:
    std::vector<std::string> m_class_database;

public:
    RelationManger(std::string filename);
    void create_relations();
    void add_relation(std::vector<std::string>classesNames,uint8_t direction,uint8_t relationType,std::string label,std::vector<std::string>multiplicity);
    ~RelationManger();
};



#endif /*_RELATION_MANGER_H*/