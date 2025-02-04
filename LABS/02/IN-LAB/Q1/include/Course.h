#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
using namespace std;

class Student;
class Teacher;

class Course {
private:
    string name;
    vector<Student*> studentsEnrolled;
    vector<Teacher*> teachersTeaching;

public:
    Course(const string& name);
    void addStudent(Student* student);
    void addTeacher(Teacher* teacher);
    void displayStudents() const;
    void displayTeachers() const;
    string getName() const;
};

#endif