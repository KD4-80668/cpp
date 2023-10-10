#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float sal;
    string desig;

public:
    Employee()
    {
        
        this->id = 0;
        this->sal = 0;
    }

    Employee(int id, float sal)
    {
       
        this->id = id;
        this->sal = sal;
    }

    int get_id()
    {
        return this->id;
    }

    void set_id(int id)
    {
        this->id = id;
    }

    float get_sal()
    {
        return this->sal;
    }

    void set_sal(float sal)
    {
        this->sal = sal;
    }
    string get_desig()
    {
        return desig;
    }
    void set_designation(string desig)
    {
        this->desig=desig;
    }

    void accept()
    {
        cout << "Enter Employee ID: \t" << endl;
        cin >> this->id;
        cout << "Enter Employee Salary: \t" << endl;
        cin >> this->sal;
    }

    void display()
    {
        cout << "Employee ID: \t" << this->id << endl;
        cout << "Employee Salary: \t" << this->sal << endl;
    }
};

class Manager : virtual public Employee
{
private:
    float bonus;

public:
    Manager()
    {
        this->bonus = 0;
        this->set_designation("Manager");
    }

    Manager(int id, float sal, float bonus)
    {
        this->set_id(id);
        this->set_sal(sal);
        this->bonus = bonus;
        this->set_designation("Manager");
    }

    float get_bonus()
    {
        return this->bonus;
    }

    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }

    void accept()
    {
        Employee::accept();
        cout << "Enter Bonus: \t";
        cin >> this->bonus;
    }

    void display()
    {
        Employee::display();
        cout << "Bonus: \t" << this->bonus << endl;
    }

protected:
    void accept_manager()
    {
        cout << "Enter Bonus: \t";
        cin >> this->bonus;
    }

    void display_manager()
    {
        cout << "Bonus: \t" << this->bonus << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    float comm;

public:
    Salesman()
    {
        this->set_designation("Salesman");
        this->comm = 0;
    }

    Salesman(int id, float sal, float comm)
    {
        this->set_id(id);
        this->set_sal(sal);
        this->comm = comm;
        this->set_designation("Salesman");
    }

    float get_comm()
    {
        return this->comm;
    }

    void set_comm(float comm)
    {
        this->comm = comm;
    }

    void accept()
    {
        Employee::accept();
        cout << "Enter Commission: \t";
        cin >> this->comm;
    }

    void display()
    {
        Employee::display();
        cout << "Commission: \t" << this->comm << endl;
    }

protected:
    void accept_salesman()
    {
        cout << "Enter Commission: \t";
        cin >> this->comm;
    }

    void display_salesman()
    {
        cout << "Commission: \t" << this->comm << endl;
    }
};

class Sales_manager : public Manager, public Salesman
{
public:
    Sales_manager()
    {
        this->set_designation("Salesmanager");
    }

    Sales_manager(int id, float sal, float bonus, float comm)
    {
        this->set_id(id);
        this->set_sal(sal);
        this->set_bonus(bonus);
        this->set_comm(comm);
        this->set_designation("Salesmanager");
    }

    void accept()
    {
        Employee::accept();
        Manager::accept_manager();
        Salesman::accept_salesman();
    }

    void display()
    {
        Employee::display();
        Manager::display_manager();
        Salesman::display_salesman();
    }
};
int submenu1()
{
    int choice;
    cout<<"-----------INSIDE ENTER EMPLOYEE---------------"<<endl;
    cout<<"ENTER 1 TO ACCEPT MANAGER"<<endl;
    cout<<"ENTER 2 TO ACCEPT SALESMAN"<<endl;
    cout<<"ENTER 3 TO ACCEPT SALESMANAGER"<<endl;
    cout<<"ENTER 0 TO EXIT"<<endl;
    cin>>choice;
    cout<<"-----------------------------------------------"<<endl;
    return choice;
}
int submenu2()
{
    int choice;
    cout<<"-----INSIDE DISPLAY EMPOYEE WITH RESPECT TO DESIGNATION---------"<<endl;
    cout<<"ENTER 1 TO DISPLAY COUNT OF MANAGER"<<endl;
    cout<<"ENTER 2 TO DISPLAY COUNT OF SALESMAN"<<endl;
    cout<<"ENTER 3 TO DISPLAY COUNT OF SALESMANAGER"<<endl;
    cout<<"ENTER 0 TO EXIT"<<endl;
    cin>>choice;
    cout<<"-----------------------------------------------"<<endl;
    return choice;
}
int submenu3()
{
    cout<<"---INSIDE DISPLAY RESPECTIVE DESIGNATION EMPLOYEE----------"<<endl;
    int choice;
    cout<<"ENTER 1 TO DISPLAY ALL MANAGER"<<endl;
    cout<<"ENTER 2 TO DISPLAY ALL SALESMAN"<<endl;
    cout<<"ENTER 3 TO DISPLAY ALL SALESMANAGER"<<endl;
    cout<<"ENTER 0 TO EXIT"<<endl;
    cin>>choice;
    cout<<"-----------------------------------------------"<<endl;
    return choice;
}
int menu()
{
    int choice;
    cout<<"ENTER 1 TO ENTER EMPLOYEE "<<endl;
    cout<<"ENTER 2 TO DISPLAY EMPLOYEE WITH RESPECT TO DESIGNATION"<<endl;
    cout<<"ENTER 3 TO DISPLAY RESPECTIVE DESIGNATIONO EMPLOYEE"<<endl;
    cout<<"ENTER 0 TO EXIT"<<endl;
    cin>>choice;
    return choice;
}
int main()
{
    int manager_count=0,salesman_count=0,salesmanager_count=0;
    Employee *ptr[10];
    int choice,subchoice,index=0;
    while((choice=menu())!=0)
    {
        switch(choice)
        {
            case 1:
            while((subchoice=submenu1())!=0)
            {
                switch(subchoice)
                {
                    case 1:
                    cout<<"ENTER MANAGER DETAILS"<<endl;
                    ptr[index]=new Manager();
                    ptr[index]->accept();
                    manager_count++;
                    index++;
                    break;
                    case 2:
                    cout<<"ENTER SALESMAN DETAILS"<<endl;
                    ptr[index]=new Salesman();
                    ptr[index]->accept();
                    salesman_count++;
                    index++;
                    break;
                    case 3:
                    cout<<"ENTER SALESMANAGER DETAILS"<<endl;
                    ptr[index]=new Sales_manager();
                    ptr[index]->accept();
                    salesmanager_count++;
                    index++;
                    break;
                }
            }
            //cout<<"INDEX "<<index;
            break;
            case 2:
            while((subchoice=submenu2())!=0)
            {
                switch(subchoice)
                {
                    case 1:
                    cout<<"There are "<<manager_count<<" manager in the Organisation"<<endl;
                    break;
                    case 2:
                    cout<<"There are "<<salesman_count<<"salesman in the Organisation"<<endl;
                    break;
                    case 3:
                    cout<<"There are "<<salesmanager_count<<"salesmanager in the Organisation"<<endl;
                    break;
                }
            }
            break;
            case 3:
            while((subchoice=submenu3())!=0)
            {
                switch(subchoice)
                {
                    case 1:
                    for(int i=0;i<index;i++)
                    {
                        if(ptr[i]->get_desig()=="Manager")
                        {
                            ptr[i]->display();
                        }
                    }
                    break;
                    case 2:
                    for(int i=0;i<index;i++)
                    {
                        if(ptr[i]->get_desig()=="Salesman")
                        {
                            ptr[i]->display();
                        }
                    }
                    break;
                    case 3:
                    for(int i=0;i<index;i++)
                    {
                        if(ptr[i]->get_desig()=="Salesmanager")
                        {
                            ptr[i]->display();
                        }
                    }
                    break;
                }
            }
            break;
            default:
            cout<<"INVALID CHOICE"<<endl;
            break;
        }
    }
for(int i=0;i<index;i++)
{
    delete ptr[i];
}
    
    
    return 0;
}