#include "lt.h"
#include <iostream>
using namespace std;

LT::LT(string id, string name, int capacity, string type) {
    this->id = id;
    this->name = name;
    this->capacity = capacity;
    this->type = type;
}

string LT::getId() { return id; }
string LT::getName() { return name; }
int LT::getCapacity() { return capacity; }
string LT::getType() { return type; }

void LT::display() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Capacity: " << capacity << endl;
    cout << "Type: " << type << endl;
}