#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course {
private:
    string code;
    string name;
    int credits;
    string type; // "Theory" or "Lab"
    string preferredDay;
    string preferredTime;

public:
    Course(string code, string name, int credits, string type);
    
    void setPreferredSlot(string day, string time);
    
    string getCode();
    string getName();
    int getCredits();
    string getType();
    string getPreferredDay();
    string getPreferredTime();
    
    void display();
};

#endif