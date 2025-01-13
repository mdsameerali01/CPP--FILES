#include <iostream>
using namespace std;
// the meomry allocate for some classes are same for all objects
// the same functions will allocate one memory and objects in class allocate a specific memory

// PROGRAM FOR CLASSES BY ARRAY METHOD

class shop
{
    int item_id[100];
    int item_price[100];
    int counter = 0; // by default it is private
                     // WE CAN SET INITIAL VALUE HERE OTHERWISE WILL CREATE A FUNCTION
public:
    // void initcounter(void) { counter = 0; } // function to intialize the counter value and set to zero in overall program
    void setprice(void);  // (GHAR KA AADMI)
    void displayprice(void);
};
void shop ::setprice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> item_id[counter];
    cout << "enter Price of your item" << endl;
    cin >> item_price[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of of item with Id " << item_id[i] << " is " << item_price[i] << endl;
    }
    // item_id[counter]=item_id[i],item_price[counter]=item_price[i]
    // counter{0,1,2}=i{0,1,2}
}
int main()
{
    shop dukaan;
    // dukaan.initcounter();
    // dukaan.setprice();
    // dukaan.setprice();
    // dukaan.setprice();


    //OR USING LOOP
    for (int j = 0; j < 3; j++)
    {
        dukaan.setprice();
    }

    dukaan.displayprice();

    return 0;
}