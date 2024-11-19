#include <iostream>
#include "../header/Task.h"


Task::Task() {

    taskName = "";
    taskDescription = "";
    taskStatus = "";
    taskPriority = "";
    taskManager = "";
    startDate = { 0, 0, 0, 0, 0, 0};
    endDate = { 0, 0, 0, 0, 0, 0};
    dueDate = { 0, 0, 0, 0, 0, 0};
}

Task::~Task() {
    std::cout << "task destroyed" << std::endl;
}

Task::Task(std::string name, std::string description, std::string status, std::string priority, std::string manager, tm start, tm end , tm due) {

    this->taskName = name;
    this->taskDescription = description;
    this->taskStatus = status;
    this->taskPriority = priority;
    this->taskManager = manager;
    this->startDate = start;
    this->endDate = end;
    this->dueDate = due;
}


std::string Task::getTaskName() const {
    return taskName;
}

void Task::setTaskName(std::string taskName) {
    this->taskName = taskName;
}


std::string Task::getDescriptionName() const {
    return taskDescription;
}

void Task::setDescriptionName(std::string taskDescription) {
    this->taskDescription = taskDescription;
}

std::string Task::getStatus() const {
    return taskStatus;
}

void Task::setStatus(std::string taskStatus) {
    this->taskStatus = taskStatus;
}

void Task::setTaskPriority(std::string taskPriority) {
    this->taskPriority = taskPriority;
}

std::string Task::getTaskPriority() const {
    return taskPriority;
}


void Task::setTaskManager(std::string manager) {
    this->taskManager = manager;
}

std::string Task::getTaskManager() const {
    return taskManager;
}

tm Task::getStartDate() const {
    return startDate;
}
void Task::setStartDate(tm start) {
    startDate = start;
    // Implement date parsing and conversion here
}

tm Task::getEndDate() const {
    return endDate;
}
void Task::setEndDate(tm end) {
    endDate = end;
}

tm Task::getDueDate() const {
    return dueDate;
}

void Task::setDueDate(tm due) {
    dueDate = due;
}


