#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <vector>
using namespace std;

class Course; 

class Teacher {
private:
    string name;
    vector<Course*> coursesTeaching;

public:
    Teacher(const string& name);
    void assignCourse(Course* course);
    void displayCourses() const;
    string getName() const;
};

#endif