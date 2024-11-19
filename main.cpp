#include <iostream>
#include "header/Task.h"
#include <iostream>
#include <iomanip>

int main() {

    Task task1;
    task1.setTaskName("klasse in c++");
    task1.setDescriptionName("ch muss bis Ende der Woche die Klasse lernen.");
    task1.setStatus("Ongoing");
    task1.setTaskPriority("High");
    task1.setTaskManager("Javid Salihe");
    task1.setStartDate({ 10, 20, 02,20, 11,2024});
    task1.setEndDate({ 10, 20, 02,20, 12,2024});
    task1.setDueDate({ 10, 20, 02,30, 12,2024});

    tm sd = task1.getStartDate();
    tm ed = task1.getEndDate();
    tm du = task1.getDueDate();

    std::cout << "Task Name: " << task1.getTaskName() << std::endl;
    std::cout << "Task Description: " << task1.getDescriptionName() << std::endl;
    std::cout << "Task Status: " << task1.getStatus() << std::endl;
    std::cout << "Task Priority: " << task1.getTaskPriority() << std::endl;
    std::cout << "Task Manager: " << task1.getTaskManager() << std::endl;
    std::cout << "Task Start Date: " << std::put_time(&sd, "%d-%m-%Y") << std::endl;
    std::cout << "Task End Date: " << std::put_time(&ed, "%d-%m-%Y") << std::endl;
    std::cout << "Task Due Date: " << std::put_time(&du, "%d-%m-%Y") << std::endl;

    return 0;
}
