#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

Course::Course(const string& title, const string& code, const string& desc, int numModules)
    : courseTitle(title), courseCode(code), courseDescription(desc), numOfModules(numModules), modulesCount(0) {
    Instructor = nullptr; // Initialize instructor pointer
    modulesPtr = new Module[numOfModules]; // Allocate memory for modules
}

Course::~Course() {
    // Delete dynamically allocated modules
    delete[] modulesPtr;
    modulesPtr = nullptr;

    // Delete dynamically allocated instructor if necessary
    if (Instructor) {
        delete Instructor;
        Instructor = nullptr;
    }
}

// Set the instructor for the course
void Course::setInstrutor(Instructor* instr) {
    Instructor = instr;
}

// Getters
string Course::getCourseTitle() const {
    return courseTitle;
}

string Course::getCourseCode() const {
    return courseCode;
}

string Course::getDescription() const {
    return courseDescription;
}

// Display course details
void Course::displayCourseInfo() const {
    cout << "Course Title: " << courseTitle;
    cout << "\nCourse Code: " << courseCode;
    cout << "\nCourse Description: " << courseDescription << endl;
}

// Enroll a student in the course
void Course::enrollStudent(Student* studentPtr) {
    enrolledStudents.push_back(studentPtr);
}

// Add a module to the course
void Course::addModule(string title, string id, string contents) {
    if (modulesCount < numOfModules) {
        // Use the modulesCount index to add the module
        modulesPtr[modulesCount].setModuleTitle(title);
        modulesPtr[modulesCount].setModuleId(id);
        modulesPtr[modulesCount].setModuleContents(contents);
        modulesCount++; // Increment the count after adding the module
    } else {
        cout << "Max number of modules added!\n";
    }
}

// Display all modules in the course
void Course::displayModules() const {
    cout << "Modules for " << courseTitle << ":\n";
    for (int i = 0; i < modulesCount; i++) {
        modulesPtr[i].showModuleInfo();
    }
}
