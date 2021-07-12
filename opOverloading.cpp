#include<iostream>
using namespace std;

/*
Polymorphism
---->Compile time Polymorphism----> 1) Function and 2)operator overloading
---->Runtime Polymorphism---------> 1)  Virtual Functions
*/


class Vector
{
    public:
        int x,y;     
        Vector()                  // Default Constructor
        { 

        }

        Vector (int a, int b)     // Constructor Overloaded
        {
            x = a;
            y = b;
        }

        Vector operator+(const Vector&);             // Prototype declared here   
        //Vector is the return type
        //operator+ is syntax part which tells that '+' operator will be overloaded
};
// "return type" "In which class prototype / Scope of function / scope of operator in which operato+ exists" "::" "function name / operator synatx" 
Vector Vector::operator+(const Vector& parameter)   // :: is a scope resolution operator.  parameter is of type vector
{
    Vector temp;                                    // Definition of function
    temp.x = x + parameter.x;
    temp.y = y + parameter.y;
    return temp;                                                
}

int main()
{
    Vector vec1(4,2);
    Vector vec2(2,2);
    Vector vec3 = vec1 + vec2;
    
    cout<< "Result is (" << vec3.x <<", " << vec3.y << ")" <<endl;    // output : Result is (6, 4) 
    return 0;
}
