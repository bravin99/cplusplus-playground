/*
    Write program that ask for the numbers of elements in an array and then fill it in.
    Use new and delete.
*/
#include<iostream>
using namespace std;

int main()
{
    int arrayNum;
    cout<<"Enter the size o the array: "; cin>>arrayNum;

    int *arr = new int[arrayNum];

    for (int x=0; x<arrayNum; ++x)
    {
        cout<<"Enter a number: ";
        cin>>arr[x];
    }

    delete[] arr;

    return 0;
}
