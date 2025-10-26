#include <iostream>

using namespace std;

int main()
{
    double amt;

    cout << "What is your total purchase amount? $";
    cin >> amt;

    double tax = 0.06 * amt;

    double tot = tax + amt;

    cout << "Your tax amount is : $" << tax << " \nAnd your total amount is : $" << tot; 
}