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
    Module();
    Module(string title, string id);

    //Getters 
    
    //Setters
    void setModuleTitle(const string&  title);
    void setModuleId(const string&  id);
    void setModuleContents(const string& contents);
    
    //Dispaly func
    void showModuleInfo();
};