/*
    Create an array that can hold ten integers, and get input from user.
    Display those values on the screen, and then prompt the user for an integer.
    Search through the array, and count the number of times the item is found.
*/
#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    int myArray[10];
    int lookfor, appearances = 0;
    string myInputs;

    for (int i=0; i<10; ++i)
    {
        int x = i+1;
        cout<<"Enter a number ("<<x<<"): ";
        getline(cin,myInputs);
        stringstream(myInputs)>>myArray[i];
    }

    cout<<"Enter a number to look for in the array: ";
    getline(cin,myInputs);
    stringstream(myInputs)>>lookfor;

    for (int l=0; l<10; ++l)
    {
        if (myArray[l] == lookfor)
        {
            appearances += 1;
        }
    }

    cout<<"The number "<<lookfor<<", appears in the array "<<appearances<<" times.\n"<<endl;
}
