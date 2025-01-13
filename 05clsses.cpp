/*
       oops-classes and objects
       c++--initially called c with classes by strustroump
       structures has limitations memebers are pulic
       classes = structure + more
       classes -- can have methods and properties  it will make few members as private and public
       structure in c++ are typedef
       you can declare objects with the class declaration
       ex----class employee{
           class definatiion
       }harry rohan lovish
       sameer.salary = 6777; make no sense if salary is private
       */
// Nesting of Member functions

// ONES COMPLIMENT USING CLASSES
#include <iostream>
using namespace std;



class binary
{
private:
    string s;
    // void chk_bin(void);

public:
    void chk_bin(void);
    void read(void);
    void ones_compliment(void);
    void display(void);
};
void binary::read(void)
{
    cout << "enter a binary number " << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1') // s.at(i) is defined to configure the string letter places
        {
            cout << "Incorrect Binary format" << endl;
            exit(0); // this statement is used to stop the loop working and stop the upcoming functions to be worked because if first letter is not binary there is no need to run the program to check others
        }
    }
}
void binary::ones_compliment(void)
{
    chk_bin();  // nested function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    };
}
void binary ::display(void)
{
    cout << "Displaying binary number" << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
  //  b.chk_bin();  //private function
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}