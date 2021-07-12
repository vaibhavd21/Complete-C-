#include <iostream>
using namespace std;

class Employee
{
    int data;
    static int count;            // can be only declared here , no initialization is possible her(throws an error)
    // definiton is outside the class
    //single copy of the data member which is shared between all the objects of the class

public:
    void setData(int aId)
    {
        data = aId;
        count++;                     // Accessible to members of class i.e. objects of class
    }
    void getData(void)
    {
        cout << "The id of this employee is " << data << " and this is employee number " << count << endl;
    }

    static void getCount(){         //Method of the class Employee, can only access static data members and static methods
        //cout<<id; // throws an error as id is not static member
        cout<<"The value of count is "<<count<<endl;
    }
};


// definition of static data member
// Count is the static data member of class Employee
int Employee::count; // Default value is 0 
// int Emplyee :: count = 1000 , count can be changed to another value from default value.

int main()
{
    Employee e1, e2, e3;
    // harry.id = 1;
    // harry.count=1; // id and count are private , we need getters and setters

    e1.setData(124);
    e1.getData();

    Employee::getCount();   //only be accessed using the scope resolution operator

    e2.setData(125);
    e2.getData();

    Employee::getCount(); //only be accessed using the scope resolution operator

    e3.setData(126);
    e3.getData();
    Employee::getCount(); //only be accessed using the scope resolution operator

    return 0;
}