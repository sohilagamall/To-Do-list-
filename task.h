// this file like a map to identify what's inside the main file to the compiler
// contain the declaration to the class and the functions will be used

#ifndef TASK_H // like saying if this file hasn't been defined before, continue
#define TASK_H

#include <string>
using namespace std;

class Task
{
private:
    int id;
    string title;
    string description;

public:
    Task(int id, string title, string description);

    // getters as our data is private
    int getid() const { return id; }
    string getitle() const { return title; }
    string getdes() const { return description; }

    // setters
    void setitle(string t) { title = t; }
    void setdes(string d) {description= d;}

    //display each task
    void display() const;
};

#endif