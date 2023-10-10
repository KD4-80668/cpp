#include <iostream>
#include <string>
using namespace std;
class student
{

    int roll;
    string name;
    float marks;

public:
    void initstudent()
    {

        roll = 80668;
        name = "AMISHA MADAV";
        marks = 70.01;
    }
    void printStudentOnConsole()
    {
        cout << "THE NAME IS:\t" << name << endl;
        cout << "THE ROLL IS:\t" << roll << endl;
        cout << "THE MARKS IS:\t" << marks << endl;
    }
    void acceptStudentFromConsole()
    {
        cout << "ENTER NAME,ROLL,MARKS:" << endl;
        cin >> name >> roll >> marks;
    }
};

int main()
{
    student amisha;
    /*amisha.initstudent();
    amisha.printStudentOnConsole();
    amisha.acceptStudentFromConsole();
    amisha.printStudentOnConsole();*/
    int input;
    cout << "------------menu--------------" << endl;
    cout << "enter your choice:" << endl
         << "1. To enter student details" << endl
         << "2. To display student details:";
    cin >> input;
    switch (input)
    {
    case 1:
         amisha.acceptStudentFromConsole();
        break;
        case 2: amisha.printStudentOnConsole();
        break;
        case 3: cout<< "you have entered wrong choice"<<endl;
        break;
    }
}