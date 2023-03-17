#include<iostream>

using namespace std;

int main()
{
    int a, b;
    int *ptrA = &a, *ptrB = &b;

    cout<<"Enter integer A: ";
    cin>>a<<endl;
    cout<<"Enter integer B: ";
    cin>>b<<endl;

    cout<<"A: "<<*ptrA<<endl;
    cout<<"B: "<<*ptrB<<endl;
}
