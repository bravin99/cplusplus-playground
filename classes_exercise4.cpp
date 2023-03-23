/*
    Perform addition operation on complex data using class and object.
    The program should ask for real and imaginary part of two complex numbers,
    and display the real and imaginary parts of their sum.
*/
#include<iostream>
#include<sstream>

using namespace std;

class Numbers
{
public:
    double real;
    double imaginary;
};

int main()
{
    string in;
    Numbers n1, n2;

    cout<<"\t\t\tCALCULATING SUMS"<<endl;

    cout<<"\nFirst numbers: "<<endl;
    cout<<"Enter the real number: ";
    getline(cin,in);
    stringstream(in)>>n1.real;
    cout<<"Enter the imaginary number: ";
    getline(cin,in);
    stringstream(in)>>n1.imaginary;

    cout<<"\nSecond numbers: "<<endl;
    cout<<"Enter the real number: ";
    getline(cin,in);
    stringstream(in)>>n2.real;
    cout<<"Enter the imaginary number: ";
    getline(cin,in);
    stringstream(in)>>n2.imaginary;

    cout<<"\nReal numbers sum: "<<n1.real+n2.real<<endl;
    cout<<"Imaginary numbers sum: "<<n1.imaginary+n2.imaginary<<endl;

    return 0;
}
