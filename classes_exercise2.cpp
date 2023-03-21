/*
    Write a program and input two integers in main and pass them to default constructor of the class.
    Show the result of the additon of two numbers.
*/

#include<iostream>
#include<sstream>

using namespace std;

class ExampleConstructor
{
public:
    int val1, val2;
    ExampleConstructor(int a, int b)
    {
        val1 = a;
        val2 = b;
        cout<<"Initialized value1="<<val1<<", and value2="<<val2<<endl;
    }
    int sum_function(){return val1+val2;}
};

int main()
{
    string myString;
    int a,b;

    cout<<"Enter the first integer: ";
    getline(cin,myString);
    stringstream(myString)>>a;
    cout<<"\n";

    cout<<"Enter the second integer: ";
    getline(cin,myString);
    stringstream(myString)>>b;
    cout<<"\n";

    ExampleConstructor el(a,b);
    cout<<"\n";
    cout<<"Sum of the values: "<<el.sum_function()<<endl;

}
