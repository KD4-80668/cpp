#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet,inches;
    public:
    Distance()
    {
        this->feet=0;
        this->inches=0;
    }
    Distance(int feet,int inches)
    {
        this->feet=feet;
        this->inches=inches;
    }
    void accept()
    {
        cout<<"Enter Feet";
        cin>>this->feet;
        cout<<"Enter Inches";
        cin>>this->inches;
    }
    void display()
    {
        cout<<"Feet = "<<feet<<endl;
        cout<<"Inches = "<<inches<<endl;
    }
    void operator++()
    {
        //this->feet=this->feet+1;
        this->inches=this->inches+1;
    }
    Distance operator+(Distance &d2)
    {
    this->feet=this->feet+d2.feet;
    this->inches=this->inches+d2.inches;
    }
    //friend Distance operator+(Distance d1,Distance d2);
    friend bool operator==(Distance &d1,Distance &d2);
    friend void operator--(Distance &d1);
    friend void operator<<(ostream &out,Distance &d1);
    friend void operator>>(istream &in,Distance &d1);
};
void operator<<(ostream &out,Distance &d1)
{
    out<<"Feet = "<<d1.feet;
    out<<"Inches= "<<d1.inches;

}
void operator>>(istream &in,Distance &d1)
{
    cout<<"Enter Feet";
    in>>d1.feet;
    cout<<"Enter inches";
    in>>d1.inches;
}

bool operator==(Distance &d1,Distance &d2)
{
    Distance d3;
    if(d1.feet==d2.feet && d1.inches==d2.inches)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void operator--(Distance &d1)
{
    d1.inches=d1.inches-1;
}

int main()
{
    Distance d1(3,2);
    Distance d2(7,9);
    Distance d3(2,1);
    bool isequal;
    
    d3.display();
    isequal=d1==d2;
    if(isequal==0)
    {
        cout<<"Distances are not equal"<<endl;
    }
    else
    {
        cout<<"Distances are equal"<<endl;
    }
    ++d1;
    d1.display();
    --d1;
    d1.display();
    cout<<d1;
    cin>>d2;
    cout<<d2;
    d3+d2;
    cout<<d3;
    return 0;
}