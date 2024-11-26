#include "Person.h"
#include "Course.h"

using namespace std;

class Student : public Person {

private:
    int studentID;
    string enrollmentDate;
    string * completedCourses = new string[16];
    string * certifications = new string[16];

public:

    bool enrollCourse(Course& courseTitle);
    bool submitAssignment(Assignment& assign);
    int checkProgress(Course& course);
    void viewCertifications();
};