#include "OverNightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include <iostream>

using namespace std;
int main()
{
    Package p1{ "Jorge" ,"300 spanish hills","Mercedes","Texas","78570","John","2001 somewhere","fayetteville","California","56585",34.2,1.1 }; //

    TwoDayPackage p2{ "Jordan" ,"12 peterson hills","weslaco","Ohio","78554","Jill","332 otherPlace","broncs","NewYork","56585",10,1.1,3.1 }; // 2 day shippint

    OverNightPackage p3{ "chucho" ,"300 spanish mountains","Mercedes","Texas","78570","edgar","2001 somewhere","weslaco","texas","56544",90 ,1.1,2.0 }; //overnight

    //overloaded outstreams and overriden functions
    cout << p1;
    cout << p1.calculateCost() << "\n\n";
    cout << p2;
    cout << p2.calculateCost() << "\n\n";
    cout << p3;
    cout << p3.calculateCost() << "\n\n";
    


}

