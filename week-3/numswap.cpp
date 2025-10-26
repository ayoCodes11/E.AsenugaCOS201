#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int ex;

    cout << "Enter your first number : ";
    cin >> num1;

    cout << "Enter your second number : ";
    cin >> num2;

    //Swapping

    ex = num1;
    num1 = num2;
    num2 = ex;

    cout << "Your first number is now : " << num1 << " and your second number is : " << num2;

    return 0;

}