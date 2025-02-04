#include "Student.h"
#include "Course.h"
#include <iostream>
using namespace std;

Student::Student(const string& name) : name(name) {}

void Student::enrollCourse(Course* course) {
    coursesEnrolled.push_back(course);
    course->addStudent(this);
}

void Student::displayCourses() const {
    cout << name << "'s enrolled courses:" << endl;
    for (const auto& course : coursesEnrolled) {
        cout << "- " << course->getName() << endl;
    }
}

string Student::getName() const {
    return name;
}