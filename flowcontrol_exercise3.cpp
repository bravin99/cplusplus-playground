/*
    Initialize y=0 and x=6.
    Then write the appropiate staments to print x is greater than y on one line and then x is equal to 6
    on the next line.
    Do this using if statement.
*/

#include<iostream>

using namespace std;

int main()
{
    int y = 0;
    int x = 6;

    cout<<"X: "<<x<<", Y: "<<y<<"\n"<<endl;

    if (x>y)
        cout<<"x is greater than y"<<endl;
    if (x==6)
        cout<<"x is equal to 6"<<endl;

    cout<<"\n";
}
