#include<iostream>
using namespace std;

int main()
{
    for (int x=10; x>0; x--)
    {
        cout<<x<<", ";
        if (x==3)
        {
            cout<<"operation aborted"<<endl;
            break;
        }
    }
}
