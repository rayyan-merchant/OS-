#include "Course.h"
#include "Student.h"
#include "Teacher.h"
#include <iostream>
using namespace std;

Course::Course(const string& name) : name(name) {}

void Course::addStudent(Student* student) {
    studentsEnrolled.push_back(student);
}

void Course::addTeacher(Teacher* teacher) {
    teachersTeaching.push_back(teacher);
}

void Course::displayStudents() const {
    cout << "Students enrolled in " << name << ":" << endl;
    for (const auto& student : studentsEnrolled) {
        cout << "- " << student->getName() << endl;
    }
}

void Course::displayTeachers() const {
    cout << "Teachers teaching " << name << ":" << endl;
    for (const auto& teacher : teachersTeaching) {
        cout << "- " << teacher->getName() << endl;
    }
}

string Course::getName() const {
    return name;
}