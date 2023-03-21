/*
    Write a class having two private variables and one member function which will return the area of the rectangle.
*/
#include<iostream>>
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
    Area rect1;
    rect1.length = 20;
    rect1.width = 10;
    cout<<"Area of rect1 is: "<<rect1.calculate_area()<<endl;

    cout<<"\n"<<endl;

    return 0;
}
