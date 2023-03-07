#include<iostream>
using namespace std;

int main()
{
    for (int x=10; x>0; x--)
    {
        if (x==5) continue;
        cout<<x<<", ";
    }
    cout<<"liftoff!"<<endl;
}
