#include "Module.h"
#include <iostream>
using namespace std;

Module::Module(){
    ModuleTitle = "";
    moduleID = "";  
    moduleContents = "";
}

Module::Module(string title, string id){
    ModuleTitle = title;
    moduleID = id;  
    moduleContents = "";
}

void Module::setModuleTitle(const string& title){
    ModuleTitle = title;
}

void Module::setModuleId(const string& id){
    moduleID = id;
}
    
void Module::setModuleContents(const string& contents){
    moduleContents = contents;
}

void Module::showModuleInfo(){
    cout<< "Module Title:"<<ModuleTitle;
    cout<< "\nModule ID"<<moduleID;
    cout<< "\n Content:"<<moduleContents;
}