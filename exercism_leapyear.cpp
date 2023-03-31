//Given a year, report if it is a leap year.
#include<iostream>
#include<sstream>

using namespace std;

void is_leap_year(int y)
{
    if (y % 4 == 0)
        cout<<y<<" --> Leap Year"<<endl;
    else
        cout<<y<<" --> Not Leap Year"<<endl;
}

int main()
{
    string inp;
    int year;

    while (true)
    {
        cout<<"Enter a year: ";
        getline(cin, inp);
        stringstream(inp)>>year;
        is_leap_year(year);
        cout<<"------------------"<<endl;
    }

    return 0;
}
