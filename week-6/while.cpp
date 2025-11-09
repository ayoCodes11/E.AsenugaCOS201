#include <iostream>

using namespace std;

int main(){
    int i = 1;
    int sum = 0;

    while (i < 10) {
        sum = sum + i;
        
        cout<<"When i = " << i << endl;
        i++;
        cout << "The sum is : " << sum << endl;
    }

    cout<<"The sum is = "<<sum;
}