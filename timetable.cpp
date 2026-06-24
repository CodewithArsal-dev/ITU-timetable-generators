#include "timetable.h"
#include <iostream>
using namespace std;

void Timetable::addTeacher(Teacher t) { teachers.push_back(t); }
void Timetable::addLT(LT lt) { lts.push_back(lt); }
void Timetable::addCourse(Course c) { courses.push_back(c); }
void Timetable::addTimeSlot(TimeSlot ts) { timeSlots.push_back(ts); }

bool Timetable::hasClash(string teacherName, string day, string startTime) {
    for (Entry& e : entries) {
        if (e.teacherName == teacherName && e.day == day && e.startTime == startTime)
            return true;
    }
    return false;
}

bool Timetable::hasLTClash(string ltName, string day, string startTime) {
    for (Entry& e : entries) {
        if (e.ltName == ltName && e.day == day && e.startTime == startTime)
            return true;
    }
    return false;
}

void Timetable::generate() {
    entries.clear();
    for (Course& course : courses) {
        bool assigned = false;
        for (Teacher& teacher : teachers) {
            vector<string> teacherCourses = teacher.getCourses();
            bool teaches = false;
            for (string tc : teacherCourses) {
                if (tc == course.getName()) teaches = true;
            }
            if (!teaches) continue;

            for (LT& lt : lts) {
                if (lt.getType() != course.getType()) continue;

                for (TimeSlot& slot : timeSlots) {
                    if (!hasClash(teacher.getName(), slot.getDay(), slot.getStartTime()) &&
                        !hasLTClash(lt.getName(), slot.getDay(), slot.getStartTime())) {
                        
                        Entry e;
                        e.teacherName = teacher.getName();
                        e.courseName = course.getName();
                        e.ltName = lt.getName();
                        e.day = slot.getDay();
                        e.startTime = slot.getStartTime();
                        e.endTime = slot.getEndTime();
                        entries.push_back(e);
                        assigned = true;
                        break;
                    }
                }
                if (assigned) break;
            }
            if (assigned) break;
        }
    }
}

void Timetable::display() {
    cout << "\n=== TIMETABLE ===" << endl;
    for (Entry& e : entries) {
        cout << e.day << " " << e.startTime << "-" << e.endTime
             << " | " << e.courseName
             << " | " << e.teacherName
             << " | " << e.ltName << endl;
    }
}

vector<Entry> Timetable::getEntries() { return entries; }
vector<Teacher> Timetable::getTeachers() { return teachers; }
vector<LT> Timetable::getLTs() { return lts; }
vector<Course> Timetable::getCourses() { return courses; }