#include<iostream>
using namespace std;

int main()
{
    char s1[] = "A string";
    char * p = s1;

    cout<<"Letter at index[0]: "<<*p;
    cout<<", address at index[0]: "<<p;
    cout<<"Letter t position: "<<p[3]<<endl;
    p += 2;
    cout<<p<<" "<<p[2]<<p[5]<<endl;
}
