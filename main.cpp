//OOP PROJECT COURSERA PROJECT MANAGEMENT SYSTEM
#include <iostream>
#include "main.h"

using namespace std;

int main (){
    cout << "Coursera Project\n\n";

    Course myCourse("OOP", "CS2001", "Object Oriented Programming Course.", 2);

    myCourse.displayInfo();

    return 0;
}