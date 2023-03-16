#include<iostream>
using namespace std;

int addition(int a, int b)
{
    return (a+b);
}
int subtraction(int a, int b)
{
    return (a-b);
}

int operation(int x, int y, int (*functiontocall)(int,int))
{
    int g;
    g = (*functiontocall)(x,y);
    return g;
}

int main()
{
    int m,n;
    int (*minus)(int,int) = subtraction;
    m = operation(7,5,addition);
    n = operation(20,m, minus);
    cout<<"M(7+5): "<<m<<endl;
    cout<<"N(20-M): "<<n<<endl;
}
