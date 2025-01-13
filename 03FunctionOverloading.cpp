#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"Using functions with 2 arguements";
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"Using function with 3 arguements";
    return a+b+c;
}
int volume(int a){
    cout<<"cube ";
    return (a*a*a);
}
int volume(double r,float h){
    cout<<"cylinder ";
    return (3.14*r*r*h);
}
int volume(int l,int b,int h){
    cout<<"rectangle ";
    return (l*b*h);
}

int main(){
cout<<"the sum of 3 and 4 is "<<sum(3,4)<<endl;
cout<<"The sum of 3,4 and 5 is "<<sum(3,4,5)<<endl;
cout<<"The volume of value a= 3 "<<volume(3)<<endl;
cout<<"The volume of value 3,4 "<<volume(3,4)<<endl;
cout<<"The volume of value 2,5,6 "<<volume(2,5,6)<<endl;

return 0;
}