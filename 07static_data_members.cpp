// static members is used when we want only static variable to be accessed

#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count; // static variable initializes the variable to zero each object has its count
                      // static variable used in class it is the property of overall class not a particular object
                      // the value stores in static variable is used throught in class it cannot change
                      // static int count=1000 gives syntax error
public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "the id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void) // static member function
    {
        cout << "The value of count is " << count << endl;
        // cout<<id throws an error
    }
};
int Employee ::count = 1000; // value can be set by here nneds to be initialize here to use static function
int main()
{
    Employee rohan, sai, ahaan; // this three employees share a samme count because we used a static variable in a class
    rohan.setData();
    rohan.getData();
    Employee::getCount();

    sai.setData();
    sai.getData();
    Employee::getCount();

    ahaan.setData();
    ahaan.getData();
    Employee::getCount();

    return 0;
}
