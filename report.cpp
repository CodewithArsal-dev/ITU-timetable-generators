#include "report.h"
#include <iostream>
#include <fstream>
using namespace std;

ReportGenerator::ReportGenerator(Timetable& t) : timetable(t) {}

void ReportGenerator::displayConsole() {
    cout << "\n========================================" << endl;
    cout << "      UNIVERSITY TIMETABLE REPORT" << endl;
    cout << "========================================" << endl;

    cout << "\nTEACHERS:" << endl;
    for (Teacher t : timetable.getTeachers()) {
        cout << "  - " << t.getName() << endl;
    }

    cout << "\nLTs:" << endl;
    for (LT lt : timetable.getLTs()) {
        cout << "  - " << lt.getName() << " (Capacity: " << lt.getCapacity() << ")" << endl;
    }

    cout << "\nCOURSES:" << endl;
    for (Course c : timetable.getCourses()) {
        cout << "  - " << c.getName() << " (" << c.getCredits() << " credits)" << endl;
    }

    cout << "\nTIMETABLE:" << endl;
    for (Entry e : timetable.getEntries()) {
        cout << "  " << e.day << " " << e.startTime << "-" << e.endTime
             << " | " << e.courseName
             << " | " << e.teacherName
             << " | " << e.ltName << endl;
    }
    cout << "\n========================================" << endl;
}

void ReportGenerator::saveToFile(string filename) {
    ofstream file(filename);
    
    file << "========================================\n";
    file << "      UNIVERSITY TIMETABLE REPORT\n";
    file << "========================================\n";

    file << "\nTEACHERS:\n";
    for (Teacher t : timetable.getTeachers()) {
        file << "  - " << t.getName() << "\n";
    }

    file << "\nLTs:\n";
    for (LT lt : timetable.getLTs()) {
        file << "  - " << lt.getName() << " (Capacity: " << lt.getCapacity() << ")\n";
    }

    file << "\nCOURSES:\n";
    for (Course c : timetable.getCourses()) {
        file << "  - " << c.getName() << " (" << c.getCredits() << " credits)\n";
    }

    file << "\nTIMETABLE:\n";
    for (Entry e : timetable.getEntries()) {
        file << "  " << e.day << " " << e.startTime << "-" << e.endTime
             << " | " << e.courseName
             << " | " << e.teacherName
             << " | " << e.ltName << "\n";
    }

    file << "\n========================================\n";
    file.close();
    
    cout << "Report saved to " << filename << endl;
}