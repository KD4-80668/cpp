#include<iostream>
using namespace std;
class Product
{
    protected:
    int id;
    string title;
    float price; 
    string type;
    public:
    Product()
    {
        this->id=0;
        this->title="";
        this->price=0;
    }
    virtual void accept()=0;
    virtual void display()=0; 
    friend void calculateBill(Product *ptr[],int index);
    friend void displayCart(Product *ptr[],int index);

};
class Book: public Product{
protected:
string author;
public:
Book()
{
    this->type="B";
}
void accept()
{
    cout<<"Enter Id ";
    cin>>id;
    cout<<"Enter Title";
    cin>>title;
    cout<<"Enter price";
    cin>>price;
    cout<<"Enter Author for Book"<<endl;
    cin>>author;
}
void display()
{
    cout<<" ID = "<<this->id<<endl;
    cout<<" Title = "<<this->title<<endl;
    cout<<"Price = "<<this->price<<endl;
    cout<<"Author = "<<author<<endl;
}
};
class Tape: public Product{
protected:
string artist;
public:
Tape()
{
    this->type="T";
}
void accept()
{
    cout<<"Enter Id ";
    cin>>id;
    cout<<"Enter Title";
    cin>>title;
    cout<<"Enter price";
    cin>>price;
    cout<<"Enter Artist"<<endl;
    cin>>artist;
}
void display()
{
    cout<<" ID = "<<this->id<<endl;
    cout<<" Title = "<<this->title<<endl;
    cout<<"Price = "<<this->price<<endl; 
    cout<<"Artist = "<<artist<<endl;
}
};
void calculateBill(Product *ptr[],int index)
{
    int booktotal=0,tapetotal=0,total=0;
    for(int i=0;i <index;i++)
    {
        if(ptr[i]->type=="B")
        booktotal=(booktotal+ptr[i]->price);  
    }
    booktotal=booktotal-booktotal*0.10;
    for(int i=0;i <index;i++)
    {
        if(ptr[i]->type=="T")
        tapetotal=(tapetotal+ptr[i]->price);
    }
    tapetotal=tapetotal-tapetotal*0.05;
    total=booktotal+tapetotal;
    cout<<"Total bill is "<<total<<" Rs "<<endl;

}
void displayCart(Product *ptr[],int index)
{
    cout<<"CART DETAILES"<<endl;
    for(int i=0;i<index;i++)
    {
        if(ptr[i]->type=="B")
        {
        //    cout<<"BOOK ID = "<<ptr[i]->id<<endl; 
        //    cout<<"BOOK TITLE = "<<ptr[i]->title<<endl; 
        //    cout<<"BOOK PRICE = "<<ptr[i]->price<<endl; 
            ptr[i]->display();
        }
        else
        {
        if(ptr[i]->type=="T")
        {
        //    cout<<"TAPE ID = "<<ptr[i]->id<<endl; 
        //    cout<<"TAPE TITLE = "<<ptr[i]->title<<endl; 
        //    cout<<"TAPE PRICE = "<<ptr[i]->price<<endl; 
            ptr[i]->display();
        }
        }

    }

}
int menu()
{
    int choice;
    cout<<"ENTER 1 FOR BOOK"<<endl;
    cout<<"ENTER 2 FOR TAPE"<<endl;
    cout<<"ENTER 3 TO CALCULATE BILL"<<endl;
    cout<<"ENTER 4 TO DISPLAY CART DETAILS"<<endl;
    cout<<"ENTER 0 TO EXIT"<<endl;
    cin>>choice;
    return choice;
}
int main()
{
    int choice;
    Product *ptr[3];
    int index=0;
       while((choice=menu())!=0)
       {
        switch(choice)
        {
            case 1:
            if(index<3)
            {
            ptr[index]=new Book();
            ptr[index]->accept();
            index++;
            }
            else
            cout<<"Cant enter book maximum limit of 3 products reached"<<endl;
            break;
            case 2:
            if(index<3)
            {
            ptr[index]=new Tape();
            ptr[index]->accept();
            index++;
            }
            else
            cout<<"Cant enter tape maximum limit of 3 products reached"<<endl;
            break;
            case 3:
            calculateBill(ptr,index);
            break;
            case 4:
            displayCart(ptr,index);
            break;
            default:
            cout<<"YOU ENTERED WRONG CHOICE"<<endl;
            break;
        }
        
       }
       for(int i=0;i<index;i++)
       {
        delete ptr[i];
       }
    return 0;
}