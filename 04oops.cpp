#include<iostream>
using namespace std;
// classes are mainly used to secure the information which can be hidden structure cannot do so

class Employee
{
    private:
          int a,b,c; 
    public:
       int d,e;
       void setdata(int a1,int b1,int c1); //Declaration
     void getData(){
       cout<<" The Value of a is "<<a<<endl;
       cout<<" The Value of b is "<<b<<endl;
       cout<<" The Value of c is "<<c<<endl;
       cout<<" The Value of d is "<<d<<endl;
       cout<<" The Value of e is "<<e<<endl;
    
    }


};
void Employee :: setdata(int a1,int b1, int c1){
        a=a1;
        b=b1;
        c=c1;
    }
int main(){
    Employee sameer;
  //  sameer.a=22;throws an error because a is private
    sameer.e=89;

    sameer.setdata(1,2,4);
    sameer.getData();

return 0;

}
/* class Animal
{
    private
    int no_of_animals,float weight;
    public
    char name, longint price
}*/
