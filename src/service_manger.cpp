
#include "service_manager.hpp"

ServiceManger::ServiceManger()
{
    m_pcontrolmanger = std::make_shared<ContainerManger>(GENERATION_NAME);
    m_relationmanger=std::make_shared<RelationManger>(GENERATION_NAME);
}

void ServiceManger::start_task()
{
    uint8_t ltask_number = 0;

    ///
    std::vector<std::string>classesNames;
    std::vector<std::string>multiplicity;
    uint8_t direction=0;
    uint8_t relation_type=0;
    std::string label;

    char input;
    ///
    
    m_uimanger.hello_message();
    ltask_number = m_uimanger.menu_homewidget();
    switch (ltask_number)
    {
    case '1':
        m_pcontrolmanger->create_container();
        ltask_number = m_uimanger.menu_createwidget();
        m_pcontrolmanger->create_class(static_cast<ContainerManger::ContainerName>(ltask_number - 48));
        while (1)
        {
            ltask_number = m_uimanger.menu_addwidget();
            if (ltask_number == '1')
            {
                m_pcontrolmanger->add_attr();
            }
            else if (ltask_number == '2')
            {
                m_pcontrolmanger->add_operations();
            }
            else if (ltask_number == 'e' || ltask_number == 'E')
            {
                std::cout << "Exit is selected" << std::endl;
                m_pcontrolmanger->class_finalize();
                break;
            }
        }

        break;
    case '2':
        m_relationmanger->create_relations();
        classesNames=m_uimanger.relation_Classes_widget();
        relation_type=m_uimanger.menu_relation_widget();
        direction=m_uimanger.menu_relation_Direction_widget();
        label=m_uimanger.relation_label_widget();
        multiplicity=m_uimanger.relation_multiplicity_widget();
        m_relationmanger->add_relation(classesNames,direction,relation_type,label,multiplicity);
        break;
    case 'e':
    case 'E':
        m_pcontrolmanger.reset();
        m_relationmanger.reset();
        input=m_uimanger.generate_png_widget();
        if(input=='y'){
            m_pcontrolmanger->File_generate_png();
        }
        exit(0);
        break;
    default:
        break;
    }
}