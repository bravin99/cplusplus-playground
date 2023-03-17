#include<iostream>
using namespace std;

int main()
{
    int value;
    int * p = &value;

    cout<<"Enter value 1: ";
    cin>>value;

    cout<<"The value entered is: "<<*p<<endl;
}
