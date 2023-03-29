/*
    Write a program to read five values into an array and print them out in reverse order
    (Use two independent for loops).
*/

#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    int arr[5];
    int c;
    string myStr;
    cout<<"\t\tENTER VALUES:\n-------------------------------------"<<endl;

    for (int x=0; x<5; ++x)
    {
        c = x+1;
        cout<<"Enter value "<<c<<": ";
        getline(cin,myStr);
        stringstream(myStr)>>arr[x];
    }

    cout<<"\n\t\tPRINT ENTERED VALUES IN REVERSE ORDER:\n-------------------------------------"<<endl;
    for (int c=4; c>=0; --c)
    {
        cout<<arr[c]<<", ";
    }
    cout<<"\n"<<endl;

    return 0;
}
