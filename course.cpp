#include "course.h"
#include <iostream>
using namespace std;

Course::Course(string code, string name, int credits, string type) {
    this->code = code;
    this->name = name;
    this->credits = credits;
    this->type = type;
    this->preferredDay = "";
    this->preferredTime = "";
}

void Course::setPreferredSlot(string day, string time) {
    preferredDay = day;
    preferredTime = time;
}

string Course::getCode() { return code; }
string Course::getName() { return name; }
int Course::getCredits() { return credits; }
string Course::getType() { return type; }
string Course::getPreferredDay() { return preferredDay; }
string Course::getPreferredTime() { return preferredTime; }

void Course::display() {
    cout << "Code: " << code << endl;
    cout << "Name: " << name << endl;
    cout << "Credits: " << credits << endl;
    cout << "Type: " << type << endl;
}