//
// Created by Javid Salihe on 24.11.24.
//

#ifndef TASK_ENTRY_H
#define TASK_ENTRY_H
#include <iostream>
#include <vector>
#include "task.h"

class task_entry {
private:
    int userInput;
    std::vector<Task> tasks;
public:
    void getInput();
    void addNewEntry();
    void displayMessage();
    void controlUserInput(int userInput);
    void showTaskSaved();
};

#endif //TASK_ENTRY_H
