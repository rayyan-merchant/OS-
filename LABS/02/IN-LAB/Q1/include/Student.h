#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
using namespace std;

class Course; 

class Student {
private:
    string name;
    vector<Course*> coursesEnrolled;

public:
    Student(const string& name);
    void enrollCourse(Course* course);
    void displayCourses() const;
    string getName() const;
};

#endif