/*
Given an age in seconds, calculate how old someone would be on:
    Mercury: orbital period 0.2408467 Earth years
    Venus: orbital period 0.61519726 Earth years
    Earth: orbital period 1.0 Earth years, 365.25 Earth days, or 31557600 seconds
    Mars: orbital period 1.8808158 Earth years
    Jupiter: orbital period 11.862615 Earth years
    Saturn: orbital period 29.447498 Earth years
    Uranus: orbital period 84.016846 Earth years
    Neptune: orbital period 164.79132 Earth years
*/
#include<iostream>
using namespace std;

const double secondsInEarthYear = 60 * 60 * 24 * 365.25;

void round_years(double x)
{
    printf("%.2f", x);
}

int main()
{
    cout<<"\t\tCalculating Age On Different Planets\n"<<endl;
    double givenSeconds = 1000000000.00;
    double earthYears = givenSeconds/secondsInEarthYear;
    int an;
    cout<<"1. Proceed with default"<<endl;
    cout<<"2. Enter age"<<endl;

    cout<<"Enter option: "; cin>>an;
    if (an == 2)
    {
        cout<<"Enter age in years: ";
        cin>>earthYears;
    }
    else
        { cout<<"Invalid option, using deaults!!"<<endl; }

    printf("\n1) Age on Mercury: %.2f", earthYears/0.2408467);
    printf("\n2) Age on Venus: %.2f", earthYears/0.61519726);
    printf("\n3) Age on Earth: %.2f", earthYears);
    printf("\n4) Age on Mars: %.2f", earthYears/1.8808158);
    printf("\n5) Age on Jupiter: %.2f", earthYears/11.862615);
    printf("\n6) Age on Saturn: %.2f", earthYears/29.447498);
    printf("\n7) Age on Uranus: %.2f", earthYears/84.016846);
    printf("\n8) Age on Neptune: %.2f", earthYears/164.79132);
    cout<<endl;

    return 0;
}
