#include <iostream>
using namespace std;

float MoneyRecieved(int currentmoney, float InterestRate = 1.04)
{ // Name in the function or Argurment doesn't matter position of two arguements which needs to put in a correct manner first we pass an arguement then after default arguement which the value has given
    return currentmoney * InterestRate;
}
int main()
{
    int currentmoney = 100; 
  
    cout << "if you have " << currentmoney << "Rs in your bank account,you will recieve " << MoneyRecieved (currentmoney) << "Rs after 1 year" << endl;
    cout << "for VIP:if you have " << currentmoney << "Rs in your bank account,you will recieve " << MoneyRecieved(currentmoney, 2) << "Rs after 1 year";
    return 0;
}
// Constant Arguements:-- const is used to not change the value throughout the code