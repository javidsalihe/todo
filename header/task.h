#ifndef TASK_H
#define TASK_H
#include <ctime>
#include <iostream>
#include "date.h"


class Task : public Date{
private:
    std::string taskName;
    std::string taskDescription;
    std::string taskStatus; // ongoing , pending, completed, cancelled
    std::string taskPriority; // lowest, highest
    std::string taskManager; // current task manager
public:

    //  constructor
    Task();
    // de constructor
    ~Task();
    // constructor with parameters
    Task(std::string name, std::string description, std::string status, std::string priority, std::string manager, tm taskStart,tm taskEnd);

    std::string getTaskName() const;
    void setTaskName(std::string name);

    std::string getDescriptionName() const;
    void setDescriptionName(std::string description);

    void setStatus(std::string status);
    std::string getStatus() const;

    void setTaskPriority(std::string priority);
    std::string getTaskPriority() const;

    void setTaskManager(std::string manager);
    std::string getTaskManager() const;

};

#endif //TASK_H
