#include<iostream>
#include<string>
using namespace std;

class address
{
    private:
    //data members

    string building;
    string street;
    string city;
    int pin;


    public:
    address()
    {
        this->building = "Kohinoor Complex";
        this->street = "Shivaji Nagar";
        this->city = "Kudal";
        this->pin = 416632;

    }

    address(string building, string street, string city, int pin)

    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }


     void accept()
    {
        cout << "Enter name of building, street, city and pin = ";
        cin >> this->building >> this->street >> this->city >> this->pin;
    }
    void display()
    {
        cout << "building = " << this->building << endl;
        cout << "street = " << this->street << endl;
        cout << "city = " << this->city << endl;
        cout << "pin = " << this->pin << endl; 
    }

    // Mutators -> Setters
    void setbuilding(string building)
    {
        this-> building = building;
    }

    void setstreet(string street)
    {
        this-> street = street; 
    }

    void setcity(string city)
    {
        this-> city = city;

    }

    void setpin(int pin)
    {
        this-> pin = pin;

    }

    // Inspectors -> getters
    string getbuilding()
    {
        return this->building;
    }

    string getstreet()
    {
        return this->street;
    }

    string getcity()
    {
        return this->city;
    }

    int getpin()
    {
        return this->pin;
    }


};


int main()
{
    address a1;
    a1.display();
    cout<< "***********************"<< endl;
    // t1.hr = 12; // NOT OK
    a1.setbuilding("Krishna Society");
    a1.setstreet("Aarogya Mandir");
    a1.setcity("Ratnagiri");
    a1.setpin(415612);

    cout << "After change in a1.building, a1.street, a1.city, a1.pin = " << endl;

    a1.display();

    cout<< "***********************"<< endl;
    // cout << "value of t1.min" << t1.min << endl;
    cout << "value of a1.building = " << a1.getbuilding() << endl;
    cout << "value of a1.street = " << a1.getstreet() << endl;
    cout << "value of a1.city = " << a1.getcity() << endl;
    cout << "value of a1.pin = " << a1.getpin() << endl;

    cout<< "***********************"<< endl;
    
    address a2("Amisha", "Shaniwarpeth", "Karad", 413002);
    a2.display();
    cout<< "***********************"<< endl;
    // cout << "value of t1.min" << t1.min << endl;
    address a3;
    a3.accept();
    a3.display();
    cout<< "***********************"<< endl;
    


    return 0;
}







