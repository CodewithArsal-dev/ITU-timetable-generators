#ifndef REPORTGENERATOR_H
#define REPORTGENERATOR_H

#include <string>
#include "Timetable.h"
using namespace std;

class ReportGenerator {
private:
    Timetable& timetable;

public:
    ReportGenerator(Timetable& t);
    
    void displayConsole();
    void saveToFile(string filename);
};

#endif