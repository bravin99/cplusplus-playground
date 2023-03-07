#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
    string mystring;
    float price;
    int quantity;

    cout<<"Enter price: ";
    getline(cin,mystring);
    stringstream(mystring)>>price;
    cout<<"\n";
    cout<<"Enter quantity: ";
    getline(cin,mystring);
    stringstream(mystring)>>quantity;
    cout<<"\n";
    cout<<"The total is: "<<price*quantity<<endl;
    return 0;
}
