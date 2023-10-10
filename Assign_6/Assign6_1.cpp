#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Date
{
private:
int date,month,year;
public:
Date()
{
    this->date=0;
    this->month=0;
    this->year=0;
}
Date(int date,int month,int year)
{
    this->date=date;
    this->month=month;
    this->year=year;
}
void acceptDate()
{
    cout<<"Enter Date";
    cin>>this->date;
    cout<<"Enter month";
    cin>>this->month;
    cout<<"Enter Year";
    cin>>this->year;
}
void display()
{
    cout<<date<<"/"<<month<<"/"<<year<<endl;
}

void setday()
{
    cout<<"Enter day";
    cin>>this->date;
}
void getday()
{
    cout<<"Day = "<<this->date;
}
void setmonth()
{
    cout<<"Enter month";
    cin>>this->month;
}
void getmonth()
{
    cout<<"Enter Month = ";
    cin>>this->month;
}
void setyear()
{
    cout<<"Enter Year = ";
    cin>>this->year;
}
void getyear()
{
    cout<<"Year is = "<<this->year;
}
void isLeap()
{
    if(year%100!=0&&year%4==0)
    {
        cout<<"It is a Leap year"<<endl;
    }
    else
    {
        cout<<"It is not a leap year"<<endl;
    }
}
};
class Employee
{
    private:
    int id;
    float sal;
    string dept;
    Date joining;
    public:
    Employee()
    {
        this->id=0;
        this->sal=0;
        this->dept="";
    }
    Employee(int id,float sal,string dept,int day,int month,int year):joining(day,month,year)
    {
        this->id=id;
        this->sal=sal;
        this->dept=dept;
    }
    void getid()
    {
        cout<<"Employee id is "<<id<<endl;
    }
     void setid(int id)
    {
        this->id=id;
    }
    void getsal()
    {
        cout<<"Salary is"<<this->sal<<endl;
    }
    void setsal(float sal)
    {
        this->sal=sal;
    }
    void getdept()
    {
        cout<<"Department is "<<dept<<endl;
    }
    void setdept(string dept )
    {
        this->dept=dept;
    }
    void get_joining_date()
    {
       cout<<"Joining Date is ";
       joining.display();
    }
    void set_joining_date()
    {
       joining.acceptDate();   
    }
    void display()
    {
        cout<<"Employee Id = "<<this->id<<endl;
        cout<<"Salary is = "<<this->sal<<endl;
        cout<<"Department is = "<<this->dept<<endl;
        joining.display();
    }
    void accept()
    {
        cout<<"Enter Emoloyee Id";
        cin>>this->id;
        cout<<"Enter Emoloyee Salary";
        cin>>this->sal;
        cout<<"Enter Emoloyee Department";
        cin>>this->dept;
        joining.acceptDate();

    }


    

};

class Person
{
private:
string name,addr;
Date birth_date;
public:
Person()
{
    this->name="";
    this->addr="";
}
Person(string name,string addr,int day,int month,int year):birth_date(day,month,year)
{
    this->name=name;
    this->addr=addr;
}
void getname()
{
    cout<<"Name is "<<this->name<<endl;
}
void setname()
{
    cout<<"Enter Name";
    cin>>this->name;
}
void setaddr()
{
    cout<<"Enter address";
    getline(cin>>ws,addr);

}
void getaddr()
{
    cout<<"Address is"<<this->addr<<endl;
}
void getbithdate()
{
    birth_date.display();
}
void setbirthdate()
{
    birth_date.acceptDate();
}
void display()
{
    cout<<"Name is "<<this->name<<endl;
    cout<<"Address is "<<this->addr<<endl;
    birth_date.display();
}
void accept()
{
    cout<<"Enter Name ";
    cin>>this->name;
    cout<<"Enter Address";
    getline(cin>>ws, addr);
    birth_date.acceptDate();
}
};
int main()
{
    // Employee e;
    // e.display();
    // Employee e1(1,1000,"sales",12,12,1995);
    // e1.display();
    
    // e1.setid(10);
    // e1.setsal(2000);
    // e1.setdept("Marketing");
    // e1.set_joining_date();
    // e1.getid();
    // e1.getsal();
    // e1.getdept();
    // e1.get_joining_date();
    //e1.display();
    cout<<"------------------------------------------------"<<endl;
    Person p;
    p.display();
    p.accept();
    p.setname();
    p.getname();
    p.setaddr();
    p.getaddr();
    p.setbirthdate();
    p.getbithdate();
    p.display();
    return 0;
}