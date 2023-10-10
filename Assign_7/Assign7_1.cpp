#include<iostream>
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

void setday(int date)
{
     this->date=date;
}
int getday()
{
    return this->date;
}
void setmonth(int month)
{
    this->month=month;
}
int getmonth()
{
    return this->month;
}
void setyear(int year)
{
   this->year=year;
}
int getyear()
{
    return this->year;
}
void isLeap()
{
    if(this->year%100!=0&&this->year%4==0)
    {
        cout<<"It is a Leap year"<<endl;
    }
    else
    {
        cout<<"It is not a leap year"<<endl;
    }
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
string getname()
{
    return this->name;
}
void setname(string name)
{
    this->name=name;
}
void setaddr(string addr)
{
    this->addr=addr;

}
string getaddr()
{
    return addr;
}
void setbithdate(int day,int month,int year)
{
    birth_date.setday(day);
    birth_date.setmonth(month);
    birth_date.setyear(year);
}
Date getbirthdate()
{
    return birth_date;
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
class Employee:public Person
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
    int getid(int id)
    {
        return id;
    }
     void setid(int id)
    {
        this->id=id;
    }
    float getsal()
    {
        return this->sal;
    }
    void setsal(float sal)
    {
        this->sal=sal;
    }
    string getdept()
    {
        return this->dept;
    }
    void setdept(string dept )
    {
        this->dept=dept;
    }
    Date get_joining_date()
    {
        return joining;
    }
    void set_joining_date(int day,int month,int year)
    {
    joining.setday(day);
    joining.setmonth(month);
    joining.setyear(year);  
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
int main()
{
    // Employee e;
    // e.accept();
    // e.display();
    // // e.get_joining_date();
    // e.set_joining_date(12,5,2023);
    // e.get_joining_date();
    // e.set_joining_date(1,23,2023);
    // e.get_joining_date().display();
    // e.setbithdate(12,05,2002);
    // e.getbirthdate().display();
    // Person *ptr=new Employee();
    // ptr->accept();
    
    // ptr->setname("ghjh");
    // ptr->display();
    Employee e;
    e.set_joining_date(1,1,1236);
    e.get_joining_date().setday(2022);
    e.get_joining_date().isLeap();
    e.get_joining_date().display();

}