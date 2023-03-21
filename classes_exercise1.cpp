/*
    Write a class having two private variables and one member function which will return the area of the rectangle.
*/
#include<iostream>
#include<sstream>

using namespace std;

class Area
{
public:
    double calculate_area()
    {
        double area = length*width;
        return area;
    }
    double length;
    double width;
};


int main()
{
    string myString;
    Area rect1;
    cout<<"Calculating Area of Triangles\n"<<endl;
    cout<<"Enter length: ";
    getline(cin,myString);
    stringstream(myString)>>rect1.length;
    cout<<"\n"<<endl;
    cout<<"Enter width: ";
    getline(cin,myString);
    stringstream(myString)>>rect1.width;
    cout<<"\n"<<endl;
    cout<<"The area of the rectagle is: "<<rect1.calculate_area()<<endl;

    cout<<"\n"<<endl;

    return 0;
}
