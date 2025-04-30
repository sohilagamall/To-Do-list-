#include <iostream>
#include "Task.h"
#include "ToDoList.h"

using namespace std;
ToDolist::ToDolist() : head(nullptr), tail(nullptr) {}

// Destructor: Deletes all nodes to free memory
ToDolist::~ToDolist()
{
    Node *current = head;
    while (current != nullptr)
    {
        Node *temp = current;
        current = current->next;
        delete temp;
    }
}

void ToDolist::addTask(const Task &task)
{
    Node *newNode = new Node(task);
    if (!head) // no tasks, list is empty
        head = tail = newNode;
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = nullptr;
        tail = newNode;
    }
}

// Displays all tasks in the list
void ToDolist::displayTasks() const{
    Node* node=head;
    while(node){
        node->task.display();
        node=node->next;
    }
}

// Deletes a task by its ID
void ToDolist::deleteTask(int id){
    Node* temp =head;
    while(temp){
        if(id== temp->task.getid()){
            if(temp->prev) temp->prev->next=temp->next;
            if(temp->next) temp->next->prev=temp->prev;
            if(temp == head) head=temp-> next;
            if(temp == tail) tail =temp->prev;
            delete temp;
            return;
        }
        temp = temp->next;
    }
}
void ToDolist::displayReverse() const{
    Node* temp=tail;
    while(temp){
        temp->task.display();
        temp=temp->prev;
    }
}