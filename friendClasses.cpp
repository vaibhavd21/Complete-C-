#include<iostream>
using namespace std;

class MyClass
{
    friend class MyAnotherClass;        // Now MyAnotherClass can access even the private attributes of MyClass
    private:
        int secret = 1000;
};

class MyAnotherClass
{
    public:
        void showSecret(MyClass mc)      // pass the instance of MyClass here
        {
            mc.secret++;
            cout<<"Printing secret value from friend class "<<mc.secret<<endl;     // Now, you can perform some other operations on the private attributes of MyCLass.
        }
};
int main()
{
    MyAnotherClass mac;
    MyClass mc;
    mac.showSecret(mc);   // output : Printing secret value from friend class 1001
    return 0;
}