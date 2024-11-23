using namespace std;
#include <string>
#include <vector>

class Module {
private:
    string ModuleTitle;
    string moduleID;  
    string moduleContents;

public:
    //Constructor
    Module(string title, string id);

    //Getters 
    
    //Setters
    void setModuleContents(string& contents);
    
    //Dispaly func
    void showModuleInfo();
};