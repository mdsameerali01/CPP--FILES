#include <iostream>
using namespace std;

class Complex
{
    int a, b; // private

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend Complex sumComplex(Complex o1, Complex o2); // it is called friend function which can declare in class to access the private data outside the class (BAHAR KA AADMI)
    void PrintNumber()
    {
        cout << "Your complex number is " << a << "+ i" << b << endl;
    }
};
Complex sumComplex(Complex o1, Complex o2)
{ // due to friend function no error occurs
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b)); // it is not the part of the class
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setNumber(3, 2);
    c1.PrintNumber();

    c2.setNumber(5, 2);
    c2.PrintNumber();

    sum = sumComplex(c1, c2);
    sum.PrintNumber();
    return 0;
}
/*
Properties of Friend Function
1.Not in the scope of classs
2.since it is not in the scope of class it is not called the object of class
3.can be invoked without the help of any object
4.Useually contains the objects as arguements
5.can be declared inside public or private section of the class
6.It cannot access the members directly by their namesand need object_name.member_name
  to access any member
*/