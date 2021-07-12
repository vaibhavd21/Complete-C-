#include<iostream>
using namespace std;

//lets see how we can achieve run time polymorphism using virtual functions

class base
{
    public:
    virtual void print()         // This will bind at run time (run time poly)  thats why it is LATE BINDING (binds function to object at the run time)
    {
        cout<<"This is the base class print func"<<endl;
    }
    void display()
    {
        cout<<"This is base class display func"<<endl;
    }
};

class derived:public base
{
    public:
    void print()
    {
        cout<<"This is the derived class print func"<<endl;
    }
    void display()
    {
        cout<<"This is derived class display func"<<endl;
    }

};
int main()
{
    base *bPtrObj;       //pointer of base class
    derived dObj;
    bPtrObj = &dObj;    // bPtrObj stores the address of derived class's object

    cout<<bPtrObj<<endl; //0x61ff08 <--- address of dobj
    bPtrObj->print(); 
    bPtrObj->display(); // even bPtrObj has address of dObj , print() and display() func of base class will be get called. Now lets make print() of base class as virtual. 
    return 0;
}