#include <iostream>
using namespace std;

class date
{
private:
    int date, month, year;

public:
 void acceptDateFromConsole()
    {
        cout << "-------ENTER DATE---MONTH---YEAR-----------" << endl;
        cin >> date >> month >> year;
    } 
     bool isLeapYear()
    {
        if (year % 4 == 0 || year % 400==0)
            return 1;
        else
            return 0;
    }
     void printDateOnConsole()
    {
        cout << " THE DATE IS : " << date << "/" << month << "/" << year << endl;
        if(isLeapYear()){
            cout<<"the year is leap year"<<endl;
        }
        else
        cout<<"the year is not leap year"<<endl;
    }

    void initDate()
    {
    }
   
   
  
};
int main(){
date d1;
d1.acceptDateFromConsole();
d1.printDateOnConsole();
return 99;
}