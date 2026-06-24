#ifndef TIMETABLE_H
#define TIMETABLE_H

#include <string>
#include <vector>
#include "Teacher.h"
#include "LT.h"
#include "Course.h"
#include "TimeSlot.h"
using namespace std;

struct Entry {
    string teacherName;
    string courseName;
    string ltName;
    string day;
    string startTime;
    string endTime;
};

class Timetable {
private:
    vector<Teacher> teachers;
    vector<LT> lts;
    vector<Course> courses;
    vector<TimeSlot> timeSlots;
    vector<Entry> entries;

public:
    void addTeacher(Teacher t);
    void addLT(LT lt);
    void addCourse(Course c);
    void addTimeSlot(TimeSlot ts);
    
    bool hasClash(string teacherName, string day, string startTime);
    bool hasLTClash(string ltName, string day, string startTime);
    
    void generate();
    void display();
    
    vector<Entry> getEntries();
    vector<Teacher> getTeachers();
    vector<LT> getLTs();
    vector<Course> getCourses();
};

#endif