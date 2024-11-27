#ifndef DATE_H
#define DATE_H
#include <ctime>



class Date {

private:
    int day;
    int month;
    int year;

public:
    Date();
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void displayDate() const;


    tm taskStart = {};
    tm taskEnd = {};
    time_t taskStartDate;
    time_t taskEndDate;
    void setTaskStart(int day, int month, int year);
    void setTaskEnd(int day, int month, int year);

    time_t getStartDate() const;
    time_t getEndDate() const;

    void displayStartDate() const;
    void displayEndDate() const;
    void displayBothDate() const;


    void displayDate2();
    int daysDifference(time_t startDate,time_t endDate);

};



#endif //DATE_H
