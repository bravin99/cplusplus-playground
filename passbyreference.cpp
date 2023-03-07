#include<iostream>
using namespace std;


void passbyreference(int& a, int& b)
{
    a*=2;
    b*=3;
}

int main()
{
    int x=5, y=10;
    passbyreference(x,y);
    cout<<"Pass by reference results, x: "<<x<<" y: "<<y;
    cout<<"\n";
}
