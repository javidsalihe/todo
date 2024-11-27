
#include <iostream>
using namespace std;
#include "../header/task_entry.h"
#include "../header/task.h"


void showTasks() {
    Task tasks;

}

void task_entry::addNewEntry() {
    Task newTask;
    std::string taskName, taskDescription, taskStatus, taskPriority, taskManager;
    Date sdate, edate;

    std::cout << "Enter the task name: ";
    std::getline(std::cin >> std::ws, taskName);
    newTask.setTaskName(taskName);

    std::cout << "Enter the task description: ";
    std::getline(std::cin >> std::ws, taskDescription);
    newTask.setDescriptionName(taskDescription);

    std::cout << "Enter the task status (ongoing, pending, completed, cancelled): ";
    std::getline(std::cin >> std::ws, taskStatus);
    newTask.setStatus(taskStatus);

    std::cout << "Enter the task priority (lowest, highest): ";
    std::getline(std::cin >> std::ws, taskPriority);
    newTask.setTaskPriority(taskPriority);

    std::cout << "Enter the task manager: ";
    std::getline(std::cin >> std::ws, taskManager);
    newTask.setTaskManager(taskManager);

    // Eingabe des Startdatums
    int year, month, day;
    std::cout << "Enter the year of Start date: ";
    std::cin >> year;
    std::cout << "Enter the month of Start date: ";
    std::cin >> month;
    std::cout << "Enter the day of Start date: ";
    std::cin >> day;
    sdate.setTaskStart(day, month, year);  // Jahr, Monat, Tag setzen
    newTask.setTaskStart(day, month, year); // Jahr, Monat, Tag setzen

    // Eingabe des Enddatums
    std::cout << "Enter the year of End date: ";
    std::cin >> year;
    std::cout << "Enter the month of End date: ";
    std::cin >> month;
    std::cout << "Enter the day of End date: ";
    std::cin >> day;
    edate.setTaskEnd(day, month, year);  // Jahr, Monat, Tag setzen
    newTask.setTaskEnd(day, month, year); // Jahr, Monat, Tag setzen

    std::cout << "Task added successfully." << std::endl;
    tasks.push_back(newTask);
    showTaskSaved();
}
void task_entry::showTaskSaved() {
    std::cout << "Saved Tasks:" << std::endl;
    for (const auto& task : tasks) {
        std::cout << "Task Name: " << task.getTaskName() << std::endl;
        std::cout << "Description: " << task.getDescriptionName() << std::endl;
        std::cout << "Status: " << task.getStatus() << std::endl;
        std::cout << "Priority: " << task.getTaskPriority() << std::endl;
        std::cout << "Manager: " << task.getTaskManager() << std::endl;
        task.displayBothDate();
    }
}
void task_entry::displayMessage() {
    cout << "1: Enter (1) for adding New Task" << endl;
    cout << "2: Enter (2) for showing All Task" << endl;
    cout << "3: Enter (3) for Task status" << endl;
    cout << "3: Enter (4) for Task priority" << endl;
    cout << "your input is: ";
}
void task_entry::controlUserInput(int userInput) {

    do {

        cin >> userInput;
        switch(userInput) {
            case 1:
                cout << "Enter (0) for new start" << endl;
                task_entry::addNewEntry();
            break;
            case 2:
                cout << "Enter (0) for new start" << endl;
                showTaskSaved();
            break;
            case 3:
                cout << "Enter (0) for new start" << endl;
            cout << "Task status" << endl;
            break;
            case 4:
                cout << "Enter (0) for new start" << endl;
            cout << "Task priority" << endl;
            break;
            default:
                cout << "Enter (0) for new start" << endl;
            cout << "Invalid input. Please try again." << endl;
        }
    }while (userInput != 0);
}
void task_entry::getInput() {
    task_entry::displayMessage();
    task_entry::controlUserInput(userInput);
}


