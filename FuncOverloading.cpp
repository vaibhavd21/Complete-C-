#include<iostream>
using namespace std;

/*
Polymorphism
---->Compile time Polymorphism----> 1) Function and 2)operator overloading
---->Runtime Polymorphism---------> 1)  Virtual Functions
*/

class FunctioOverloading  // same func name can perform different operations , they differ by means of number and type of arguments passed
{
    public:
    void fun()
    {
        cout<<"fun with no arguments "<<endl;
    }
    void fun(int x)
    {
        cout<<"fun with 1 int variable passed as argument"<<endl;
    }
    void fun(double d)
    {
        cout<<"fun with 1 double argument passed "<<endl;
    }
};


int main()
{
    FunctioOverloading obj;
    obj.fun();
    obj.fun(2);
    obj.fun(4.65);
    return 0;
}