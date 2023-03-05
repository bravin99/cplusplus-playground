#include<iostream>
using namespace std;

// defining constants using preprocessor definitions
#define PI 3.14159
#define NEWLINE '\n'

// typed constant expressions
//const double pi = 3.14159;
//const char newline = '\n';

int main()
{
    double radius = 5.0;
    double circle_area;
    circle_area = 2 * PI * radius;

    cout<<"Area: "<<circle_area;
    cout<<NEWLINE;

    return 0;
}
