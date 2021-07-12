#include <iostream>
using namespace std;

class shape //base class
{
protected: // accessible in the class which are inheriting this class....Reusable in derived class
    int height;
    int width;

public:
    void setValues(int a, int b)
    {
        width = a;
        height = b;
    }
};

class description //base
{
public:
    void print(string descr)
    {
        cout << "We are in " << descr << " class" << endl;
    }
};

class Rectangle : public shape, public description //rectangle class here is child class MULTIPLE INHERITANCE
{
public:
    int area()
    {
        return (height * width);
    }
};

class Triangle : public shape
{
public:
    int area()
    {
        return (height * width / 2);
    }
};

int main()
{
    Rectangle rAngle;
    Triangle tAngle;
    rAngle.setValues(5, 4);
    tAngle.setValues(5, 4);
    rAngle.print("Rectangle");
    cout << "Rectangle area is " << rAngle.area() << endl;
    cout << "Triangle area is " << tAngle.area() << endl;
    return 0;
}