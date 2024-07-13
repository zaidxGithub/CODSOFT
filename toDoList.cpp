#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;
int ID;

struct list
{
    int id;
    string task;
    string status;
};

    void addlist() {
    system("cls");
    cout << "\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "\t\t\t\t                       WELCOME TO Your ToDo List                      " << endl
         << "\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl 
         << endl << endl;
    
    list list;
    
    cout << "\n Enter new task > ";
    cin.get();
    getline(cin, list.task);
    
    cout << " Enter its status > " ;
    getline(cin, list.status);
     cout<< endl;
    
    ID++;

    ofstream write;    // Write to list.txt
    write.open("list.txt", ios::app);
    write << "\n" << ID << "\n" << list.task << "\n" << list.status;
    write.close();

    write.open("id.txt");  // Write to list.txt
    write << ID;
    write.close();

    char ch;
    cout << " Do you want to add more tasks? (y/n): ";
    cin >> ch;
    cout<<endl;

    if (ch == 'y') {
        addlist();
    } else {
        cout << "\n--------------------Task and its Status have been added successfully--------------------";
        return;
    }
}



void print(list s)
{
    cout << "\n\tID is : " << s.id;
    cout << "\n\tTask is : " << s.task;
    cout << "\n\tStatus is : " << s.status;
}

void readData()
{
    system("cls");
     cout << "\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "\t\t\t\t                       WELCOME TO Your ToDo List                      " << endl
         << "\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl 
         << endl << endl;
         

    struct list
    {
        int id;
        string task;
        string status;
    };

    ifstream read;
    read.open("list.txt");

    if (!read.is_open())
    {
        cout << "Error opening the file. Make sure 'list.txt' exists." << endl;
        return;
    }

    cout << "\n--------------------------| Your current Tasks in the list |------------------------" << endl
         <<endl;

    list list;
    while (read >> list.id)
    {
        read.ignore();
        getline(read, list.task);
        getline(read, list.status);
        cout << "ID: " << list.id <<endl 
             << "Task: " << list.task << endl
             << "Status: " << list.status << endl
             << "---------------------------------------------------------------------------------" << endl;
    }
    read.close(); // Close the file stream
}


int searchData()
   {
     system("cls");
    cout << "\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "\t\t\t\t                       WELCOME TO Your ToDo List                      " << endl
         << "\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl 
         << endl << endl;
    int id;
    cout << "\n\tEnter task id: ";
    cin >> id;
    list list;
    ifstream read;
    read.open("list.txt");

    while (!read.eof())
    {
        read >> list.id;
        read.ignore();
        getline(read, list.task);
        getline(read, list.status);
        if (list.id == id)
        {
            print(list);
            return id;
        }
    }
 }


void deleteData()
 {
     system("cls");
     cout << "\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "\t\t\t\t                       WELCOME TO Your ToDo List                      " << endl
         << "\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl 
         << endl << endl;
        

    int id = searchData();
    cout << "\n\tDo you want to delete this task (y/n) : ";
    char choice;
    cin >> choice;
    if (choice == 'y')
    {
        list list;
         ofstream tempFile;
           tempFile.open("temp.txt");
             ifstream read;
               read.open("list.txt");

        while (!read.eof())
        {
            read >> list.id;
               read.ignore();
                 getline(read, list.task);
                //   read.ignore();
                   getline(read, list.status);

            if (list.id != id)
            {
                tempFile << "\n"
                         << list.id;
                  tempFile << "\n"
                           << list.task;
                     tempFile << "\n"
                              << list.status;
            }
        }
        read.close();
          tempFile.close();
           remove("list.txt");
             rename("temp.txt", "list.txt");
                remove("id.txt");
            

        cout << "\n\tTask deleted successfuly";
    }
    else
    {
        cout << "\n\tRecord not deleted";
    }
}

void updateData()
{
     system("cls");
     cout << "\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "\t\t\t\t                       WELCOME TO Your ToDo List                      " << endl
         << "\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl 
         << endl << endl;
        
    int id = searchData();
    cout << "\n\tYou want to update this task (y/n) : ";
    char choice;
    cin >> choice;
    if (choice == 'y')
    {
        list newData;
        cout << "\n\tEnter todo task : ";
        cin.get();
        getline(cin, newData.task);
        cout << endl;

        cout << "\n\t Enter the update status: ";
        cin.get();
        getline(cin, newData.status);

        list list;
        ofstream tempFile;
        tempFile.open("temp.txt");
        ifstream read;
        read.open("list.txt");

        while (!read.eof())
        {
            read >> list.id;
            read.ignore();
            getline(read, list.task);
            getline(read, list.status);
            if (list.id != id)
            {
                tempFile << "\n"
                         << list.id;
                   tempFile << "\n"
                            << list.task;
                      tempFile << "\n"
                               << list.status;
            }
            else
            {
                tempFile << "\n"
                         << list.id;
                   tempFile << "\n"
                            << newData.task;
                      tempFile << "\n"
                               << newData.status;
            }
        }
        read.close();
        tempFile.close();
           remove("list.txt");
              rename("temp.txt", "list.txt");
                 cout << "\n\t Task updated successfuly" << endl
                      << "\n\t Status updated successfully";
    }
    else
    {
        cout << "\n\tRecord not deleted";
    }
}
int main()
  {  
     system("cls");
      system("title todoapp @copyassignment");
       cout << "\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl
            << "\t\t\t\t!!                                                                     !!" << endl
            << "\t\t\t\t!!                      WELCOME TO YOUR TODO LIST                      !!" << endl
            << "\t\t\t\t!!                                                                     !!" << endl
            << "\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl
            << endl << endl  << endl;
       
    ifstream read;
    read.open("id.txt");
    if (!read.fail())
    {
        read >> ID;
    }
       else
          {
               ID = 0;
           }
    read.close();


    while (true)
    {
         cout << "\n\n"
              << "1. Add Task" <<   "\t\t2. View Tasks" << "\t\t3. Search Task"
             <<"\t\t4. Delete Task"<< "\t\t5. Update Task"<<"\t\t0. Close List \n\n";
    
        int choice;
        cout << "\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1: addlist();break;
        case 2: readData();break;
        case 3: searchData();break;
        case 4: deleteData();break;
        case 5: updateData();break;
        default:  cout << "\n-------------------------------------< Thanks for using ToDo list >---------------------------------------------- ";
                   exit(0);
            
        }
      
    }
    
}