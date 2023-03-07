#include<iostream>
using namespace std;

int add(int a, int b);
int subtract(int a, int b);

int main()
{
    int add_result = add(10, 5);
    int sub_result = subtract(10, 5);
    cout<<"operations on values: a=10 and b=5"<<"\n"<<endl;
    cout<<"Subtraction: "<<sub_result<<"\n"<<endl;
    cout<<"Addition: "<<add_result<<"\n"<<endl;
}

int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}
