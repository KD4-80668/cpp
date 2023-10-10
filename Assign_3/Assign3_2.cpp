#include <iostream>
using namespace std;

class Tollbooth
{
private:
    unsigned int total_cars_passed;
    double total_amount_collected;

public:
    Tollbooth()
    {
        this->total_cars_passed = 0;
        this->total_amount_collected = 0;
    }

    void payingCar()
    {
        total_cars_passed++;
        total_amount_collected = total_amount_collected + 0.5;
    }

    void nopayCar()
    {
        total_cars_passed++;
    }

    void printOnConsole()
    {
        int paying_cars = this->total_amount_collected / 0.5;
        int non_paying_cars = this->total_cars_passed - paying_cars;
        cout << "Total Cars passed: \t" << this->total_cars_passed << endl;
        cout << "Total Amount Collected: \t" << this->total_amount_collected << endl;
        cout << "Number of Paying Cars: \t" << paying_cars << endl;
        cout << "Number of Non-Paying Cars: \t" << non_paying_cars << endl;
    }
};

int menu1()
{
    int choice;
    cout<<"*************************"<<endl;
    cout <<"Enter your choice: "<<endl;
    cout <<"0. Exit" <<endl;
    cout <<"1. Car passed" <<endl;
    cout <<"2. Show Details" <<endl;
    cout<<"*************************"<<endl;
    cin >> choice;
    return choice;
}

int menu2()
{
    int choice;
    cout<<"*************************"<<endl;
    cout<<"Enter Some Extra info: "<<endl;
    cout<<"1. Toll Paid"<<endl;
    cout<<"2. Toll Not Paid"<<endl;
    cout<<"*************************"<<endl;
    cin >> choice;
    return choice;
}

int main()
{   
    Tollbooth T1;
    int choice;

    while(choice = menu1())
    {
        switch(choice)
        {
            case 1:
                int choice2;
                switch(choice2 = menu2())
                {
                    case 1:
                        T1.payingCar();
                        break;
                    case 2:
                        T1.nopayCar();
                        break;
                    default:
                        cout<<"Entered Invalid Choice....:("<<endl;
                }
                break;
            case 2:
                T1.printOnConsole();
                break;
            default:
                cout<<"Entered Invalid Choice....:("<<endl;
            
        }
    }
    return 0;
}