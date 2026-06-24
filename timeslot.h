#ifndef TIMESLOT_H
#define TIMESLOT_H

#include <string>
using namespace std;

class TimeSlot {
private:
    string day;
    string startTime;
    string endTime;
    bool isOccupied;

public:
    TimeSlot(string day, string startTime, string endTime);
    
    void occupy();
    void free();
    
    string getDay();
    string getStartTime();
    string getEndTime();
    bool getIsOccupied();
    
    void display();
};

#endif