#include<iostream>
using namespace std;

int main()
{
    int x;
    int value;
    int sum = 0;

    for (x=0; x<=5; x++)
    {
        cout<<"Enter a value: ";
        cout<<"\n";
        cin>>value;
        sum = value + sum;
    }

    // sum = value + sum;
    cout<<"Sum of your values is: "<<sum;
    cout<<"\n";
    return 0;
}
