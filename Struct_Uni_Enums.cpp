#include <iostream>
#include <cstring>
using namespace std;

typedef struct employee //public by defualt //user defined data type  // can have member functions or data members
{
    /* data */
    int id;
    string name;
    float salary;
} emp; // by using typedef, we have given name 'emp' to this data type

union money
{
    /* data */
    int rice;     //4 bytes
    char car;     //1 byte
    float pounds; //4 byte
    // Total memory of union = maximum memory taken by one of the variable
};

int main()
{
    union money m1;
    m1.rice = 34;
    m1.pounds = 5.2;
    cout << m1.pounds << endl; // op 5.2
    cout << m1.rice << endl;   // op will be garbage value
    //We can only use 1 variable at a time otherwise the compiler will give us a garbage value
    //The compiler chooses the data type which has maximum memory for the allocation.
    // Last assigned data type will be overriden
    /*


    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1;                 op will be 1
    cout<<breakfast;          op 0
    cout<<lunch;              op 1
    cout<<dinner;             op 2
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car;



    emp e1;
    e1.id = 100;
    e1.name = "Vaibhav";
    e1.salary = 30000.500;
    cout << e1.name << endl;
    cout << e1.id << endl;
    cout << e1.salary << endl;



    emp arr[5];
    printf("Enter Records of 5 employees");
    for (int i = 0; i < 5; i++)
    {
        cout<<endl<<"Enter ID : "<<endl;
        cin>>arr[i].id;
        cout<<endl<<"Enter Name : "<<endl;
        cin>>arr[i].name;
    }
    printf("\n Employee Information List:");
    for (int i = 0; i < 5; i++)
    {
        printf("\nEmployee Id : %d, Name : %s", arr[i].id, arr[i].name);
    }
    */
    // cout << sizeof(e1.name) << endl; // op is 24
    // cout << sizeof(e1) << endl;      // op is 32
    return 0;
}