#include <iostream>
#include "task.h"
#include "ToDoList.h"
using namespace std;

int main()
{
    ToDolist mylist;

    cout << "Welcome to the Your To-Do list Application!";

    while (true)
    {
        cout << "\nChoose an option:\n";
        cout << "1. Add Task\n2. Display Task\n3. Delete Task\n4. Display tasks in reverse\n5. Exit\n";

        int choice;
        cin >> choice;

        if (choice == 1)
        {
            string title, desc;
            int id;
            cout << "Enter Task ID: ";
            cin >> id;
            cin.ignore(); //
            cout << "Enter Title: ";
            getline(cin, title); //
            cout << "Enter Description: ";
            getline(cin, desc);
            Task newtask(id, title, desc); //
            mylist.addTask(newtask);
        }
        else if (choice == 2)
            mylist.displayTasks();

        else if (choice == 3){
            int id;
            cout<<"Enter Task ID to Delete: ";
            cin >> id;
            mylist.deleteTask(id);
        }
        else if (choice == 4)
            mylist.displayReverse();
        else if(choice == 5){
            cout<<"exiting the application.\nGoodbye!"<<endl;
            break;
        }
        else{
            cout<<"Invalid choice.\n please try again";
        }
    }

    return 0;
}
