#include "Teacher.h"
#include "Course.h"
#include <iostream>
using namespace std;

Teacher::Teacher(const string& name) : name(name) {}

void Teacher::assignCourse(Course* course) {
    coursesTeaching.push_back(course);
    course->addTeacher(this);
}

void Teacher::displayCourses() const {
    cout << name << "'s teaching courses:" << endl;
    for (const auto& course : coursesTeaching) {
        cout << "- " << course->getName() << endl;
    }
}

string Teacher::getName() const {
    return name;
}