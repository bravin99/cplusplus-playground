/*
    Write a program that checks if the angles given can make a triangle or not (their sum must be 180 degrees).
*/
#include<iostream>
#include<sstream>

using namespace std;

void triangle_check(double a, double b, double c)
{
    double sum = a+b+c;

    if (sum == 180.0)
        cout<<"The angles can make up a triangle\n"<<endl;
    else
        cout<<"The angles can not make up a triangle\n"<<endl;
}

int main()
{
    string myInputs;
    double angle1, angle2, angle3;

    cout<<"Enter angle 1: ";
    getline(cin,myInputs);
    stringstream(myInputs)>>angle1;
    cout<<"\n";

    cout<<"Enter angle 2: ";
    getline(cin,myInputs);
    stringstream(myInputs)>>angle2;
    cout<<"\n";

    cout<<"Enter angle 3: ";
    getline(cin,myInputs);
    stringstream(myInputs)>>angle3;
    cout<<"\n";

    triangle_check(angle1, angle2, angle3);

    return 0;
}
