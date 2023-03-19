/*
    Write a program that tells you if a number is even or odd.
*/
#include<iostream>
#include<sstream>

using namespace std;

void odd_or_even(int a)
{
    if (a%2 == 0)
        cout<<a<<", is an EVEN number.\n"<<endl;
    else if (a%2 != 0)
        cout<<a<<", is an ODD number.\n"<<endl;
    else
        cout<<"Was that a valid number?\n"<<endl;

}

int main()
{
    int num = 1;
    string inp;

    cout<<"Enter a number (default="<<num<<"): ";
    getline(cin,inp);
    stringstream(inp)>>num;

    odd_or_even(num);

}
