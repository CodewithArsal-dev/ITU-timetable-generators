#include <iostream>
#include "Teacher.h"
#include "LT.h"
#include "Course.h"
#include "TimeSlot.h"
#include "Timetable.h"
#include "report.h"
using namespace std;

int main() {
    Timetable timetable;
    int choice;

    while (true) {
        cout << "\n=== University Timetable Generator ===" << endl;
        cout << "1. Add Teacher" << endl;
        cout << "2. Add LT" << endl;
        cout << "3. Add Course" << endl;
        cout << "4. Add Time Slot" << endl;
        cout << "5. Generate Timetable" << endl;
        cout << "6. View Timetable" << endl;
        cout << "7. Generate Report" << endl;
        cout << "8. Save Report to File" << endl;
        cout << "9. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string id, name, course, day;
            int numCourses, numDays;
            cout << "Teacher ID: "; getline(cin, id);
            cout << "Teacher Name: "; getline(cin, name);
            Teacher t(id, name);
            cout << "How many courses? "; cin >> numCourses; cin.ignore();
            for (int i = 0; i < numCourses; i++) {
                cout << "Course " << i+1 << ": "; getline(cin, course);
                t.assignCourse(course);
            }
            cout << "How many available days? "; cin >> numDays; cin.ignore();
            for (int i = 0; i < numDays; i++) {
                cout << "Day " << i+1 << ": "; getline(cin, day);
                t.addAvailableDay(day);
            }
            timetable.addTeacher(t);
            cout << "Teacher added!" << endl;

        } else if (choice == 2) {
            string id, name, type;
            int capacity;
            cout << "LT ID: "; getline(cin, id);
            cout << "LT Name: "; getline(cin, name);
            cout << "Capacity: "; cin >> capacity; cin.ignore();
            cout << "Type (Theory/Lab): "; getline(cin, type);
            timetable.addLT(LT(id, name, capacity, type));
            cout << "LT added!" << endl;

        } else if (choice == 3) {
            string code, name, type;
            int credits;
            cout << "Course Code: "; getline(cin, code);
            cout << "Course Name: "; getline(cin, name);
            cout << "Credits: "; cin >> credits; cin.ignore();
            cout << "Type (Theory/Lab): "; getline(cin, type);
            timetable.addCourse(Course(code, name, credits, type));
            cout << "Course added!" << endl;

        } else if (choice == 4) {
            string day, start, end;
            cout << "Day (e.g. Monday): "; getline(cin, day);
            cout << "Start Time (e.g. 08:00): "; getline(cin, start);
            cout << "End Time (e.g. 09:30): "; getline(cin, end);
            timetable.addTimeSlot(TimeSlot(day, start, end));
            cout << "Time Slot added!" << endl;

        } else if (choice == 5) {
            timetable.generate();
            cout << "Timetable generated!" << endl;

        } else if (choice == 6) {
            timetable.display();

        } else if (choice == 7) {
            ReportGenerator rg(timetable);
            rg.displayConsole();

        } else if (choice == 8) {
            string filename;
            cout << "Enter filename (e.g. report.txt): ";
            getline(cin, filename);
            ReportGenerator rg(timetable);
            rg.saveToFile(filename);

        } else if (choice == 9) {
            cout << "Goodbye!" << endl;
            break;
        }
    }

    return 0;
}