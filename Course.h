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
    vector<studentPtr*> enrolledStudents; //asssocaition

    int numOfModules;
    int modulesCount;
    Module* modulesPtr;

public:
// constructor
    Course(const string& title, const string& code, const string& desc, int numModules);
    //destructor
    ~Course();

//Setters
void setInstrutor(Instructor* instr);

//getters
    string getCourseTitle() const;
    string getCourseCode() const;
    string getDescription() const;
//relationships
    void enrollStudent(Student* student);
    void addModule(string title, string id, string contents);
//display functions
    void displayCourseInfo() const;
    void displayModules() const;
    Void displayEnrolledStudents() const;
};


