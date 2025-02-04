#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
using namespace std;

int main() {
    Student alice("Rayyan");
    Student bob("momo");

    Teacher drSmith("Dr. Rija");
    Teacher profJones("Dr. Riya");

    Course math("Mathematics");
    Course physics("Physics");

    alice.enrollCourse(&math);
    bob.enrollCourse(&physics);
    drSmith.assignCourse(&math);
    profJones.assignCourse(&physics);
    drSmith.assignCourse(&physics);

    cout << "Rayyan's courses:" << endl;
    alice.displayCourses();

    cout << "\nDr. Rija's courses:" << endl;
    drSmith.displayCourses();

    cout << "\nMathematics course students:" << endl;
    math.displayStudents();

    cout << "\nPhysics course teachers:" << endl;
    physics.displayTeachers();

    return 0;
}