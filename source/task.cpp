#include <ctime>
#include "../header/task.h"
#include "../header/date.h"
#include <iostream>
// Created by Javid Salihe on 24.11.24.


Task::Task() : Date() { // Explicitly call the default constructor
    taskName = "";
    taskDescription = "";
    taskStatus = "";
    taskPriority = "";
    taskManager = "";
    taskStart = {};
    taskEnd = {};
}

Task::Task(std::string name, std::string description, std::string status, std::string priority, std::string manager, tm taskStart, tm taskEnd)
    : Date() { // Explicitly call the default constructor
    this->taskName = name;
    this->taskDescription = description;
    this->taskStatus = status;
    this->taskPriority = priority;
    this->taskManager = manager;
    this->taskStart = taskStart;
    this->taskEnd = taskEnd;
}

Task::~Task() {
    std::cout << "task destroyed" << std::endl;
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