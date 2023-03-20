/*
    Write a program that reverses a string and prints it on the screen.
*/

#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    string MyString;

    cout<<"Enter a string (9 characters): ";
    cin>>MyString;

    cout<<"\nReversed: ";

    for (int i=MyString.length()-1; i>=0; --i)
        cout<<MyString[i];

    cout<<"\n"<<endl;

    return 0;
}
