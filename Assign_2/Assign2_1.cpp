#include <iostream>
using namespace std;

namespace NStudent
{
class Student
{
private:

    int rollno;
    string name;
    float marks;




public:

    
    void initStudent()
    {
     
        this->rollno = 1;
        this->name = "Amisha";
        this->marks = 20;

        cout<<rollno<<"-"<<name<<"-"<<marks<<endl;
    }
    
    void acceptStudentFromConsole()
    {
        cout<<"Enter the rollno"<<endl;
        cin>>this->rollno;
        cout<<"Enter the name"<<endl;
        cin>>this->name;
        cout<<"Enter the marks"<<endl;
        cin>>this->marks;

    }
    
    void printStudentOnConsole()
    {
        
        cout<< this->rollno <<endl;
        cout<< this->name <<endl;
        cout<< this->marks <<endl;
    }

};

}


int menu()

{

    int choice;
    cout<<"*************************"<<endl;
    cout<<"0. Exit "<<endl;
    cout<<"1. init "<<endl;
    cout<<"2. accept "<<endl;
    cout<<"3. print "<<endl;


    cout<<"Enter your choice = ";
    cin>>choice;
    cout<<"**********************"<<endl;
    return choice;
}

using namespace NStudent;
int main()
{   NStudent::Student c;
    int choice;
    while((choice=menu()) !=0)
    {
        switch(choice)
        {
            case 1:
            c.initStudent();
            break;

            case 2:
            c.acceptStudentFromConsole();
            break;

            case 3:
            c.printStudentOnConsole();
            break;

            
            default:
            cout<<"Wrong choice entered"<<endl;
            break;
        
        }
        
    }
    cout<<"Thank you for using this "<<endl;
    return 0;

}


