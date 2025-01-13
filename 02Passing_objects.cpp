#include <iostream>
using namespace std;

class complex
{
    int a;
    int b; // by default it is private

public:
    void setdata(int v1, int v2)
    { // passing objects in place of void
        a = v1;
        b = v2;
    }
    void setdataBysum(complex o1, complex o2)
    { // synatax for storing aor using complex numbers
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        // o1=x+iy
        // o2=p+iq
        // o1.x=a , o2.q=a, o1.y=b, o2.q=b
    }
    void PrintNumber()
    {
        cout << "Your complex number is " << a << "+i" << b << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.PrintNumber();

    c2.setdata(3, 4);
    c2.PrintNumber();

    c3.setdataBysum(c1, c2); // o1.a=1 , o2.a=3,, o1.b=2, o2.b=4
    c3.PrintNumber();

    return 0;
}