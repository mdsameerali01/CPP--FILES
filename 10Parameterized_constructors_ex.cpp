#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:  
        Point(int a,int b){ //the "Point" function is a fixed variable
            x=a;
            y=b;
        }
        void displayPoint(){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }
};
int main(){
 Point p(1,1);
 p.displayPoint();

 Point q(4,6);
 q.displayPoint();


return 0;
}
// Solve Poblem
/*
Create a function which takes two points and find distance between them
use c++ math sqrt math by making friend function
*/