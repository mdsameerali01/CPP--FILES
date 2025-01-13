#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(int x, int y)
{ // this is a Parameterized constructor because it takes parameters
    a = x;
    b = y;
};
int main()
{
    // implicit call
    Complex c(4, 6);

    // explicit call
    Complex a = Complex(5, 7);

    a.printNumber();
    c.printNumber();
    return 0;
}
