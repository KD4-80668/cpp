#include<iostream>
using namespace std;
class Factorial
{
    private:
    double fact,no;
    public:
    Factorial()
    {
        this->fact=1;
        this->no=1;
    }
    void acceptno()
    {
        cout<<"Enter Number to calculate factorial"<<endl;
        cin>>this->no;
        if(this->no<0) throw 2;
    }
    void calculateFactorial()
    {
        
        for(int i=1;i<=no;i++)
        {
            this->fact=this->fact*i;
        }

    }
    void printFactorial()
    {
        cout<<"Factorial of a Number "<<this->no<<" is "<<this->fact<<endl;
    }

};
int main()
{
    Factorial f;
    try
    {
    f.acceptno();
    f.calculateFactorial();
    f.printFactorial();
    }
    catch(int err)
    {
        cout<<"Factorial cannnot be calculated for negative number"<<endl;
    }

    return 0;
}