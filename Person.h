using namespace std;
#include <string>

class Person{

private:
    //attributes
    string name;
    int ID;
    string email;
    
public:
    //methods
    Person();
    virtual void displayInfo();
    virtual string getRole();
    virtual void sendNotification(string& msg);
};