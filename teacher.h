#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <vector>
using namespace std;

class Teacher {
private:
    string name;
    string id;
    vector<string> coursesAssigned;
    vector<string> availableDays;

public:
    Teacher(string id, string name);
    
    void assignCourse(string courseName);
    void addAvailableDay(string day);
    
    string getId();
    string getName();
    vector<string> getCourses();
    vector<string> getAvailableDays();
    
    void display();
};

#endif