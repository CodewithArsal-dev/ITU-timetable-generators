#ifndef LT_H
#define LT_H

#include <string>
using namespace std;

class LT {
private:
    string id;
    string name;
    int capacity;
    string type; // "Theory" or "Lab"

public:
    LT(string id, string name, int capacity, string type);
    
    string getId();
    string getName();
    int getCapacity();
    string getType();
    
    void display();
};

#endif