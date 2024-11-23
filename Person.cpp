#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(){
    name = "";
    ID = 0;
    email = "";
}

Person::~Person(){};

void Person::displayInfo(){
    cout << "Name: " << name << "\n ID: " << ID << endl;
}

string Person::getRole(){
    return "default role";
}

void Person::sendNotification(string& msg){
    cout << "Notification to " << msg << endl; 
};
