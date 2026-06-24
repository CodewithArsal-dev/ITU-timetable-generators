# 🎓 University Timetable Generator

A C++ console application that automatically generates university timetables with clash detection and report generation.

## ✨ Features

- Add Teachers with multiple course assignments and available days
- Add Lecture Theatres (LTs) with capacity and type (Theory/Lab)
- Add Courses with credit hours and type (Theory/Lab)
- Add Time Slots (Day + Time)
- Auto-generate timetable with constraint checking
- Clash detection for teachers and LTs
- View timetable on console
- Generate and save report to `.txt` file

## 🛠️ Built With

- C++ (C++17)
- OOP principles (Classes, Encapsulation, Vectors)
- File Handling (ofstream)
- Makefile for build automation

## 📁 Project Structure
ITU-timetable-generator/

│

├── main.cpp

├── Teacher.h / Teacher.cpp

├── LT.h / LT.cpp

├── Course.h / Course.cpp

├── TimeSlot.h / TimeSlot.cpp

├── Timetable.h / Timetable.cpp

├── report.h / report.cpp

└── Makefile

## ⚙️ How to Compile & Run

### Using Makefile (Cygwin / Linux / Mac)
```bash
make run
```

### Manual Compilation
```bash
g++ -Wall -std=c++17 -o timetable main.cpp Teacher.cpp LT.cpp Course.cpp TimeSlot.cpp Timetable.cpp report.cpp
./timetable
```

## 📋 How to Use

1. Run the program
2. Add Teachers → assign courses + available days
3. Add LTs → name, capacity, type
4. Add Courses → code, name, credits, type
5. Add Time Slots → day + start/end time
6. Generate Timetable
7. View or Save Report

## 🔍 Clash Detection

System automatically checks:
- Same teacher not assigned to 2 classes at same time
- Same LT not used by 2 classes at same time

## 👨‍💻 Author

**Arsal** — Computer Engineering Student, ITU Lahore  
2nd Semester Project