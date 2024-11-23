#include "Module.h"
#include <iostream>
using namespace std;

Module::Module(string title, string id){
    ModuleTitle = title;
    moduleID = id;  
    moduleContents = "";
}

void Module::setModuleContents(string& contents){
    moduleContents = contents;
}

void Module::showModuleInfo(){
    cout<< "Module Title:"<<ModuleTitle;
    cout<< "\nModule ID"<<moduleID;
    cout<< "\n Content:"<<moduleContents;
}