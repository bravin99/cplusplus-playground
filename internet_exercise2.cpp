/*
    Write a program in C++ to print the sum of two numbers using variables.
*/
#include<iostream>
#include<sstream>

using namespace std;

double add(double a, double b)
{
    double r;
    r = a + b;
    return r;
}

int main()
{
    string StrIn;
    double x, y, result;

    cout<<"Enter first number: ";
    getline(cin,StrIn);
    stringstream(StrIn)>>x;
    cout<<"\nEnter second number: ";
    getline(cin,StrIn);
    stringstream(StrIn)>>y;

    //result = add(x,y);
    cout<<"The sum of "<<x<<" and "<<y<<" is: "<<add(x,y)<<endl;
    return 0;
}
