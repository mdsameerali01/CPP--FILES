#include <iostream>
using namespace std;
// Recursion is simply a function which call itself
int factorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    return a * factorial(a - 1);
}
int fibonacci(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}
int main()
{
    int a, n;
    cout << "Enter n" << endl;
    cin >> n;
    // cout << "Enter a " << endl;
    // cin >> a;
    // cout << "The factorial of " << a << " is " << factorial(a) << endl;
    cout << "fibonacci n term is " << fibonacci(n);
    return 0;
}
