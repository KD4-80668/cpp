#include <iostream>
using namespace std;

class Volume
{
private:
    int length;
    int width;
    int height;

public:
    Volume(int length = 0, int width = 0, int height = 0)
    {
        this->length = length;
        this->height = width;
        this->width = height;
    }

    void displayVolume()
    {
        int volume = this->length * this->width * this->height;
        cout << "Volume of the box: \t" << volume << endl;
    }
    void changeParameters(int length, int width, int height)
    {
        this->length = length;
        this->height = width;
        this->width = height;
    }
};

int menu()
{
    int choice;
    cout<< "***********************"<<endl;
    cout << "Enter your Choice: " << endl;
    cout << "0. Exit" << endl;
    cout << "1. Reset Data" <<endl;
    cout << "2. Show Volume" << endl;
    cout << "3. Change Parameters" << endl;
    cout<< "***********************"<<endl;
    cin >> choice;
    return choice;
}

int main()
{
    Volume box;
    int choice;

    while(choice = menu())
    {
        switch(choice)
        {
            case 1:
                box.changeParameters(0,0,0);
                break;
            case 2:
                box.displayVolume();
                break;
            case 3:
                int length, width, height;
                cout <<"Enter length: \t";
                cin >> length;
                cout <<"Enter width: \t";
                cin >> width;
                cout <<"Enter height: \t";
                cin >> height;
                box.changeParameters(length, height, width);
                break;
            default:
                cout<<"Entered Invalid Choice...:("<<endl;
        }
    }
    cout << "Thank You!!!\nAnd Visit Again....:)"<<endl;
    return 0;
}