#include<iostream>
#include<string>
using namespace std;

class Books
{
    private:
        string name;
    public:
        Books(string aName)          // Constructor to initialize values to object
        {
            setName(aName);
        }
        ~Books()                     // Destructor. Whenever objects scope ends, destructor gets called automatically and all the sources of object are deleted :)
        {
            cout<<"Object destructed"<<endl;
        }


        void setName(string aName)   // setter for the private data
        {
            name = aName;
        }
        string getName()             // getter for private data
        {
            return name;
        }
};


int main()
{
    Books book1("Rich D Poor D");
    cout<<book1.getName()<<endl;


    Books book2("Harry Potter");
    cout<<book2.getName()<<endl;


    book2.setName("Harry Potter ||");   // updating using setter
    cout<<book2.getName()<<endl;


    Books *book1Pointer = &book1;
    cout<<"Received by using pointer of book (*book1Pointer).getName()........" << (*book1Pointer).getName() << endl; //(*book1Pointer) is nothing but the value. book1Pointer is the name of pointer that holds address of book1 object 


    cout << "Received by using book1Pointer->getName()......." << book1Pointer->getName()<< endl; // -> is arrow member operator... book1Pointer stores address of book1 object thats why '->' is used. 
    return 0;
}