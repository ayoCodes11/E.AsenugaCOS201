#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {

    srand(time(0));

    string fullName;

    bool isStudent;
    string pauStudent;

    int course; //1-5
    int location; //1-5

    string courseName;

    int regFee;
    int lodgingPerDay;
    int days;

    int lodgingCost;
    int total;

    cout<<"What is your full name? ";
    getline(cin, fullName);

    cout<< "\nAre you a pau Student?\nEnter 1 for TRUE, 0 for FALSE : ";
    cin>>isStudent;

    if (isStudent == 0)
    {
        pauStudent = "No";
    }
    else if (isStudent == 1)
    {
        pauStudent = "Yes";
    }
    else
    {
        cout<<"Invalid input";
    }

    cout << "\nWhat is the Course of your choice?";
    cout << "\nEnter 1 for Photography     | 3 Days | ₦10,000";
    cout << "\nEnter 2 for Planting        | 5 Days | ₦8,000";
    cout << "\nEnter 3 for Fish Farming    | 7 Days | ₦15,000";
    cout << "\nEnter 4 for Baking          | 5 Days | ₦13,000";
    cout << "\nEnter 5 for Public Speaking | 1 Days | ₦5,000\n";

    cin>>course;
    

    if(course == 1)
    {
        days = 3;
        regFee= 10000;

        courseName = "Photography";

    }
    else if(course == 2)
    {
        days = 5;
        regFee= 8000;

        courseName = "Planting";
    }
    else if(course == 3)
    {
        days = 7;
        regFee= 15000;

        courseName = "Fish Farming";
    }
    else if(course == 4)
    {
        days = 5;
        regFee= 13000;

        courseName = "Banking";
    }
    else if(course == 5)
    {
        days = 2;
        regFee= 5000;

        courseName = "Public Speaking";
    }
    else
    {
        cout<<"Invalid input";
        return 0;
    }

    cout << "\nWhat is the Location of your choice? ";
    cout << "\nEnter 1 for Camp House A | ₦10,000 ";
    cout << "\nEnter 2 for Camp House B | ₦2,500 ";
    cout << "\nEnter 3 for Camp House C | ₦5,000 ";
    cout << "\nEnter 4 for Camp House D | ₦13,000 ";
    cout << "\nEnter 5 for Camp House E | ₦5,000 \n";

    cin>>location;

    if(location == 1)
    {
        lodgingPerDay = 10000;
    }
    else if(location == 2)
    {
        lodgingPerDay = 2500;
    }
    else if(location == 3)
    {
        lodgingPerDay = 5000;
    }
    else if(location == 4)
    {
        lodgingPerDay = 13000;
    }
    else if(location == 5)
    {
        lodgingPerDay = 5000;
    }
    else
    {
        cout<<"Invalid input";
        return 0;
    }

    lodgingCost = lodgingPerDay * days;
    total = regFee + lodgingCost;

    int lodgingDiscount = 0;
    if (isStudent && location == 1 || isStudent && location == 2)
    {
        lodgingDiscount = lodgingCost * 0.05;
        lodgingCost = lodgingCost - lodgingDiscount;
    }

    int regDiscount = 0;
    if (days > 5 || regFee > 12000)
    {
        regDiscount = regFee * 0.03;
        regFee = regFee - regDiscount;
    }

    int r = rand() % 101;
    cout<<"\nYou drew the number : "<<r;

    int promo = 0;
    if (r == 7 || r == 77)
    {
        promo = 500;
        cout<<"\nCongratulations! You have received a ₦500 discount";
        total = total - promo;
    }

    cout<<"\nName : "<<fullName<<"  (Pau Student : "<<pauStudent<<")";
    cout<<"\nCourse Name : "<<courseName;
    cout<<"\nRegistration : ₦"<<regFee<<" (After ₦"<<regDiscount<<")";
    cout<<"\nLodging: ₦"<<lodgingPerDay*days<<" (After ₦"<<lodgingDiscount<<")";
    cout<<"\nRandom draw : "<<r<<" (Promo applied: ₦"<<promo<<")";
    cout<<"\nTOTAL : "<<total;

}