CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = timetable

all: $(TARGET)

$(TARGET): main.o Teacher.o LT.o Course.o TimeSlot.o Timetable.o ReportGenerator.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o Teacher.o LT.o Course.o TimeSlot.o Timetable.o ReportGenerator.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

Teacher.o: Teacher.cpp Teacher.h
	$(CXX) $(CXXFLAGS) -c Teacher.cpp -o Teacher.o

LT.o: LT.cpp LT.h
	$(CXX) $(CXXFLAGS) -c LT.cpp -o LT.o

Course.o: Course.cpp Course.h
	$(CXX) $(CXXFLAGS) -c Course.cpp -o Course.o

TimeSlot.o: TimeSlot.cpp TimeSlot.h
	$(CXX) $(CXXFLAGS) -c TimeSlot.cpp -o TimeSlot.o

Timetable.o: Timetable.cpp Timetable.h
	$(CXX) $(CXXFLAGS) -c Timetable.cpp -o Timetable.o

ReportGenerator.o: report.cpp report.h
	$(CXX) $(CXXFLAGS) -c report.cpp -o ReportGenerator.o

run: all
	./$(TARGET)

clean:
	rm -f *.o $(TARGET)