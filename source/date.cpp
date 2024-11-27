// Created by Javid Salihe on 20.11.24.
//

#include "../header/Date.h"
#include <iostream>
using namespace std;

#include <iomanip>


Date::Date() : day(0), month(0), year(0) {}




void Date::setDay(int day) {
    this->day = day;
}
void Date::setMonth(int month) {
    this->month = month;
}
void Date::setYear(int year) {
    this->year = year;
}
int Date::getDay() const {
    return day;
}
int Date::getMonth() const {
    return month;
}
int Date::getYear() const {
    return year;
}

void Date::setTaskStart(int day, int month, int year) {
    Date::setDay(day);
    Date::setMonth(month);
    Date::setYear(year);
    taskStart.tm_year = year - 1900; // `tm_year` ist relativ zu 1900
    taskStart.tm_mon = month - 1;   // Monate beginnen bei 0
    taskStart.tm_mday = day;
    taskStart.tm_hour = 0; // Stunden auf Mitternacht setzen
    taskStart.tm_min = 0;  // Minuten auf 0 setzen
    taskStart.tm_sec = 0;
    taskStartDate = mktime(&taskStart);
}
void Date::setTaskEnd(int day, int month, int year) {
    Date::setDay(day);
    Date::setMonth(month);
    Date::setYear(year);
    taskEnd.tm_year = year - 1900; // `tm_year` ist relativ zu 1900
    taskEnd.tm_mon = month - 1;   // Monate beginnen bei 0
    taskEnd.tm_mday = day;
    taskEnd.tm_hour = 0; // Stunden auf Mitternacht setzen
    taskEnd.tm_min = 0;  // Minuten auf 0 setzen
    taskEnd.tm_sec = 0;
    taskEndDate = mktime(&taskEnd);
}
time_t Date::getStartDate() const {
    return taskStartDate;
}
time_t Date::getEndDate() const{
    return taskEndDate;
}


void Date::displayStartDate() const {
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-", &taskStart);
    std::cout << buffer;
    std::cout << std::setw(2) << std::setfill('0') << (taskStart.tm_mon + 1) << "-";
    std::cout << std::setw(2) << std::setfill('0') << taskStart.tm_mday << std::endl;
}

void Date::displayEndDate() const {
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-", &taskEnd);
    std::cout << std::setw(2) << std::setfill('0') << (taskEnd.tm_mon + 1) << "-";
    std::cout << std::setw(2) << std::setfill('0') << taskEnd.tm_mday << std::endl;
}


void Date::displayBothDate() const {
    displayStartDate();
    displayEndDate();
}






void Date::displayDate() const {
    cout << "Day:  " << (getDay() < 10 ? "0" : "") << getDay() << endl;
    cout << "Month:  " << (getMonth() < 10 ? "0" : "") << getMonth() << endl;
    cout << "Year:  " << getYear() << endl;
}

void Date::displayDate2()  {

    time_t now = time(nullptr);
    if (now < Date::taskStartDate) {
        int daysLeft = Date::daysDifference(now, Date::taskStartDate);
        cout << "Task hasn't started yet. " << daysLeft << " days left until start." << endl;
    } else if (now >= Date::taskStartDate && now <= Date::taskEndDate) {
        int daysLeft = Date::daysDifference(now, Date::taskEndDate);
        cout << "Task is in progress. " << daysLeft << " days left until deadline." << endl;
    } else {
        int daysOverdue = Date::daysDifference(Date::taskEndDate, now);
        cout << "Task is overdue. " << daysOverdue << " days past the deadline." << endl;
    }
}

int Date::daysDifference(time_t startDate, time_t endDate) {
    return abs(difftime(endDate, startDate) / 86400); // 86400 seconds = one day
}



