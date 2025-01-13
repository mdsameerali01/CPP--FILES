#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    /*
    constructor is a special member function with same name as of the class. it is automatically invoked(call)
    --it is used to initialize the objects of its class
    --it is automatically invoked when an object is created
    */
    Complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(void)
{ // this is a defult constructor because it does not take parameters
    a = 10;
    b = 0;
    cout << "Hello world" << endl;
};
int main()
{
    Complex c;
    c.printNumber();
    return 0;
}
// PROPERTIES OF CONSTRUCTOR
/*
1.it should be declared in the public section of class
2.they are automatically invoked whenever the object is created
3.they cannot return values and do not have return types(void)
4.it can have default arguements
5.We cannot refer to thier address
*/