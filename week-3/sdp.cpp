#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;

    cout << "Enter your first number : ";
    cin >> num1;

    cout << "Enter your second number : ";
    cin >> num2;

    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;

    cout << "Your two numbers are : " << num1 << " & " << num2 << " \nThe sum of these numbers is : " << sum << " ; \nThe difference between these numbers is : " << diff << " ; \nAnd the product of these numbers is : " << prod;

}