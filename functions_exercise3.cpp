#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int max_two(int a, int b)
{
    int result = 0;
    if (a>b)
        result = a;
    else if (b>a)
        result = b;
    return result;
}

int main()
{
    int num_1, num_2;
    string mString;
    cout<<"Enter the first number: ";
    getline(cin,mString);
    stringstream(mString)>>num_1;
    cout<<"\nEnter the second number: ";
    getline(cin,mString);
    stringstream(mString)>>num_2;
    cout<<"\nThe greater number between "<<num_1<<" and "<<num_2<<" is: "<<max_two(num_1, num_2)<<"\n"<<endl;

    return 0;
}
