#include<iostream>
using namespace std;
enum accounttype
{
    SAVING=1,CURRENT,DMAT
};
int menu1()
{
    int choice;
    cout<<"ENTER 1 FOR SAVING ACCOUNT"<<endl;
    cout<<"ENTER 2 FOR CURRENT ACCOUNT"<<endl;
    cout<<"ENTER 3 FOR DMAT ACCOUNT"<<endl;
    cin>>choice;
    return choice;
}
class Insufficient_funds
{
    private:
    int accid;
    double current_balance,withdraw_amount;
    public:
    Insufficient_funds(int accid,double curr_balance,double withD_balance)
    {
        this->accid=accid;
        this->current_balance=curr_balance;
        this->withdraw_amount=withD_balance;
    }
    void display()
    {
        cout<<"Account number "<<this->accid<<" has insufficient balance"<<endl;
        cout<<"Current balance is "<<this->current_balance<<" less than withdrawal amount which is "<<this->withdraw_amount<<endl;
    }
};
class Account
{
    private:
    int id;
    string type;
    double balance;
    int t;
    public:
    Account()
    {
        this->id=0;
        this->balance=0;
        this->type="";
    }
    Account(int id,int account_type)
    {
        this->id=id;
        this->type=account_type;
    }
    void accept()
    {

        cout<<"Enter id";
        cin>>id;
        cout<<"Enter Type of Account"<<endl;
        t=menu1();
        if(t==SAVING)
        {
            this->type="Saving";
        }
        else if(t==CURRENT)
        {
            this->type="Current";
        }
        else if(t==DMAT)
        {
            this->type="DMAT";
        }
    }
    void display() 
    {
        cout<<"Id ="<<this->id<<endl;
        cout<<"Type of Account ="<<this->type<<endl;
        cout<<"Balance = "<<this->balance<<endl;
    }
    void set_id(int id)
    {
        this->id=id;
    }
    int get_id()
    {
        return id;
    }
    void set_type(int type)
    {
        this->type=type;
    }
    string get_type()
    {
        return type;
    }
    double get_balance()
    {
        return balance;
    }

    friend void deposit(int id,Account *arr[],double amount);
    friend void withdrawal(int id,Account *arr[],double amount);
};
enum emenu{
    EXIT,ACCEPT,DISPLAY,DEPOSIT,WITHDRAW
};


emenu menu()
{
    int choice;
    cout<<"ENTER 0 TO EXIT"<<endl;
    cout<<"ENTER 1 TO ACCEPT DETAILS"<<endl;
    cout<<"ENTER 2 TO DISPLAY DETAILS"<<endl;
    cout<<"ENTER 3 TO DEPOSIT"<<endl; 
    cout<<"ENTER 4 TO WITHDRAW"<<endl;  
    cin>>choice;
    return emenu (choice);
}
void deposit(int id,Account *arr[],double amount)
{
    for(int i=0;i<5;i++)
    {
        if(arr[i]->id==id)
        {
            arr[i]->balance=arr[i]->balance+amount;
        }
    }

}
void withdrawal(int id,Account *arr[],double amount)
{
    
    for(int i=0;i<5;i++)
    {
        if(arr[i]->id==id)
        {
            if(arr[i]->balance<amount) throw Insufficient_funds(id,arr[i]->balance,amount);
            arr[i]->balance=arr[i]->balance-amount;
        }
    }

}
int main()
{
     int choice,index=0,id;
     double amount;
     string type;
    Account *arr[5];
    while((choice=menu())!=EXIT)
    {
        switch(choice)
        {
            case ACCEPT:
            if(index<5)
            {
            arr[index]=new Account();
            arr[index]->accept();
            index++;
            }
            else
            {
                cout<<"MAXIMUM LIMITS OF 5 REACHED CANNOT ADD"<<endl;
            }
            break;
            case DISPLAY:
            for(int i=0;i<index;i++)
            {
                arr[i]->display();
            }
            break;
            case DEPOSIT:
            cout<<"Enter Account id";
            cin>>id;
            cout<<"Enter amount to deposit";
            cin>>amount;
            deposit(id,arr,amount);
            break;
            case WITHDRAW:
            cout<<"Enter Account id";
            cin>>id;
            cout<<"Enter amount to Withdraw";
            cin>>amount;
            try
            {
            withdrawal(id,arr,amount);
            }
            catch(Insufficient_funds e)
            {
                e.display();
            }
            break;
            default:
            cout<<"Invalid choice"<<endl;
        }
    }
 for(int i=0;i<index;i++)
 delete arr[i]; 
    return 0;
}