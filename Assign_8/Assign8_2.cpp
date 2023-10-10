#define SIZE 5
#include<iostream>
using namespace std;
class Stack
{
    private:
    int top,size;
    int *arr;
    public:
    Stack()
    {
        this->top=-1;
        this->size=5;
        this->arr=new int[size];
    }
    Stack(int size)
    {
        if(size!=0)
        {
            this->arr=new int[size];
            this->size=size;
        }
        else
        {
            this->arr=new int[SIZE];
            this->size=SIZE;
        }
        this->top=-1;
    }
    Stack(Stack &s1)
    {
        cout<<"Inside copy constructor"<<endl;
        this->top=s1.top;
        this->size=s1.size;
        this->arr=new int[size];
        for(int i=0;i<=top;i++)
        {
            this->arr[i]=s1.arr[i];
        }
    }
    void push(int data)
    {
        if(this->arr[top]==size-1)
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {
            top++;
            this->arr[top]=data;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Nothing to pop";
        }
        else
        {
            
            this->arr[top]=0;
            top--;
        }
    }
    void printStack()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;

        }
        else
        {
            for(int i=this->top;i>=0;i--)
            {
                cout<<arr[i]<<endl;
            }
        }
    }
    void operator=(Stack &s)
    {
        cout<<"Inside Overloaded assigment"<<endl;
        this->top=s.top;
        this->size=s.size;
        for(int i=0;i<=top;i++)
        {
            this->arr[i]=s.arr[i];
        }  
    }
     ~Stack()
    {
        if(arr!=nullptr)
        {
            delete[] arr;
            arr=nullptr;
        }  

    }
};
int main()
{
    Stack s(5);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    s.printStack();
    Stack c=s;
    Stack d;
    d=s;
    cout<<"Object C after operator overloading"<<endl;
    c.printStack();
    d.printStack();
    return 0;
}