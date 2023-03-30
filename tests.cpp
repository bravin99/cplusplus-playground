#include<iostream>

using namespace std;

string to_upper(string s)
{
    string data = s;
    for (int x=0; x<data.length(); ++x)
    {
        data[x] = toupper(data[x]);
    }
    return data;
}

string to_lower(string s)
{
    string data = s;
    for (int x=0; x<data.length(); ++x)
    {
        data[x] = tolower(data[x]);
    }
    return data;
}

int main()
{
    string n = "Bravin";
    cout<<"No.\tFarmer Name\tId No.\tGrade\tTotal Sales\tDeductions\tPay"<<endl;
    cout<<n.length()<<endl;
    cout<<to_lower(n)<<endl;
    printf("hello");
}
