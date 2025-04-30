#include "task.h"
#include <iostream>
using namespace std;

//constructor 
Task::Task(int id, string title, string description){
    this->id=id;
    this->title=title;
    this->description=description;
}

void Task::display() const{
    cout<<"Task ID: "<< id <<"\n";
    cout<<"Title: "<< title <<"\n";
    cout<<"Description: "<< description <<"\n";
    
}