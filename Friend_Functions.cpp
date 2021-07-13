#include <iostream>
using namespace std;


// 2 + 3i
// 3 + 4i
// -------
// 5 + 7i 

class Complex
{
private:
    int a;
    int b;

public:
    // sumComplex can now access the private members of Complex class
    friend Complex sumComplex(Complex o1, Complex o2);         //prototype declared here, can be declared any where in the class
    void setData(int aA, int aB)
    {
        a = aA;
        b = aB;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)        // Definition outside the class
{
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b+o2.b));
    return o3;
}



int main()
{
    /* code */
    Complex c1, c2,sum;
    c1.setData(2,3);
    c2.setData(3,4);
    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}
/*
Since it is not in the scope of the class, it cannot be called from the object of that class, for example, c1.sumComplex() is invalid (just prototype declared in the class, definition is standalone)
A friend function is then invoked without the help of any object.
eg --> sum = sumComplex(c1,c2)    sumComplex() return object of complex class
*/