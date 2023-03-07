#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    mylable:
        cout<<x<<", ";
        x--;

    if (x>0) goto mylable;
    cout<<"liftoff!"<<endl;


}
