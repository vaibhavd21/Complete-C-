#include<iostream>
using namespace std;
int main()
{
    //pointer is just a memory address
    // pointer is a type of data that stores memory address
    int a = 20;    
    double d = 3.7;
    string name = "Vaibhav" ;


    int *pA = &a; // pA is a integer pointer variable which stores address of a 
    double *pD = &d; // pD is a double pointer variable which stores address of d
    string *pName = &name; // pName is a string pointer which stores address of name variable.


    cout<<"address of a printed using only &a " << &a <<endl;
    cout<<"address of d printed using only &d " << &d <<endl;
    cout<<"address of name printed using only &name " << &name <<endl;    //you can say here that, you are printing the pointer . 20 is stored in the address pointed by 0x61ff0c. 
    
    cout<<endl;

    cout<<"address of a printed using pA " << pA <<endl;
    cout<<"address of d printed using pD " << pD <<endl;
    cout<<"address of name printed using pName " << pName <<endl;


    cout<<"Getting value stored at pNAme using *pNAme (Dereferncing) " << *pName << endl;   //Derefeernced


    return 0;
}