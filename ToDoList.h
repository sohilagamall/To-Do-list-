#ifndef TODOLIST_H //if this file hasn't been defined before continue
#define TODOLIST_H

#include "task.h"

struct Node{
    Task task;
    int data;
    Node* next;
    Node* prev;

    Node(Task t): task(t), next(nullptr), prev(nullptr){}
};

//we used task inside node as each node is a linked list contains the task
//with it's all details (id,address,description)
//whenever i want to add a task i will add a new node
//whenever i want to display the task or delete it or modify it i will work with "TASK" to access the data i want to work on
//task is the data i build the linked list for!!!


class ToDolist{
private:
    Node* head;
    Node* tail;
public:
    ToDolist(); // Constructor to initialize the list
    ~ToDolist(); // Destructor to clean up memory

    void addTask(const Task& task); // Add a new task to the list
    void displayTasks() const;       // Display all tasks
    void deleteTask(int id);        // Delete a task by its ID 
    void displayReverse() const;     // Display tasks in reverse order
};

#endif