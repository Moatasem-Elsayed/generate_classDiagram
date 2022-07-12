
#include "service_manager.hpp"

ServiceManger::ServiceManger()
{
    m_pcontrolmanger = std::make_shared<ContainerManger>(GENERATION_NAME);
}
void ServiceManger::start_task()
{
    uint8_t ltask_number = 0;
    m_uimanger.hello_message();
    ltask_number = m_uimanger.menu_homewidget();
    switch (ltask_number)
    {
    case '1':
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
        m_uimanger.menu_relationwidget();
        break;
    case 'e':
    case 'E':
        m_pcontrolmanger.reset();
        exit(0);
        break;
    default:
        break;
    }
}