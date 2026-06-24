#include "timeSlot.h"
#include <iostream>
using namespace std;

TimeSlot::TimeSlot(string day, string startTime, string endTime) {
    this->day = day;
    this->startTime = startTime;
    this->endTime = endTime;
    this->isOccupied = false;
}

void TimeSlot::occupy() { isOccupied = true; }
void TimeSlot::free() { isOccupied = false; }

string TimeSlot::getDay() { return day; }
string TimeSlot::getStartTime() { return startTime; }
string TimeSlot::getEndTime() { return endTime; }
bool TimeSlot::getIsOccupied() { return isOccupied; }

void TimeSlot::display() {
    cout << day << " " << startTime << " - " << endTime;
    cout << (isOccupied ? " [Occupied]" : " [Free]") << endl;
}