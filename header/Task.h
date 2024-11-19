#ifndef TASK_H
#define TASK_H
#include <string>
#include <ctime>

class Task {
private:
    tm timestamp;
    std::string taskName;
    std::string taskDescription;
    std::string taskStatus; // ongoing , pending, completed, cancelled
    std::string taskPriority; // lowest, highest
    std::string taskManager; // current task manager
    tm startDate;
    tm endDate;
    tm dueDate;



public:

    //  constructor
    Task();
    // de constructor
    ~Task();
    // constructor with parameters
    Task(std::string name, std::string description, std::string status, std::string priority, std::string manager, tm start, tm end , tm due);

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

    void setStartDate(tm start);
    tm getStartDate() const;

    void setEndDate(tm end);
    tm getEndDate() const;

    void setDueDate(tm due);
    tm getDueDate() const;


};

#endif
