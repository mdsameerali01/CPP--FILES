#include<iostream>
using namespace std;
  //CONSTRUCTOR OVERLOADING
class Complex{
    int a,b;
    public:
    Complex(){
      a=0;
      b=0;
    }
      Complex(int x,int y){
        a=x;
        b=y;
      }
      Complex(int x){
        a=x;
        b=0;
      };
      void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
int main(){
   Complex c(4, 6);
    c.printNumber();
return 0;
}