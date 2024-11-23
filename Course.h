using namespace std;
#include <string>
#include <vector>
#include "Student.h"
#include "Module.h"

class Course{

private:
    string courseTitle;
    string courseCode;
    string courseDescription;
    Instructor* instructor;  //aggregation
    vector<Student*> enrolledStudents; //asssocaition
    vector<Module> modules; //composition

public:
// constructor
    Course();
    //destructor
    ~Course();
//getters
    string getCourseTitle();
    string getCourseCode();
    string getDescription();
//relationships
    void enrollStudent(Student* student);
    void addModule(Module& module);
//display functions
    void displayCourseInfo();
    void displayModules();
    Void displayEnrolledStudents();
};


