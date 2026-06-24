#include "teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher(string id, string name) {
    this->id = id;
    this->name = name;
}

void Teacher::assignCourse(string courseName) {
    coursesAssigned.push_back(courseName);
}

void Teacher::addAvailableDay(string day) {
    availableDays.push_back(day);
}

string Teacher::getId() {
    return id;
}

string Teacher::getName() {
    return name;
}

vector<string> Teacher::getCourses() {
    return coursesAssigned;
}

vector<string> Teacher::getAvailableDays() {
    return availableDays;
}

void Teacher::display() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    
    cout << "Courses: ";
    for (string course : coursesAssigned) {
        cout << course << " ";
    }
    cout << endl;
    
    cout << "Available Days: ";
    for (string day : availableDays) {
        cout << day << " ";
    }
    cout << endl;
}