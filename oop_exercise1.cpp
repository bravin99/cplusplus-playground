/*
    Write a program that defines a shape class with a constructor that gives value to width and height.
    Then define two sub-classes triangle and rectangle, that calculate the area of the shape area ().
    In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.
*/

#include<iostream>

using namespace std;

class Shape
{
protected:
    double width, height;
public:
    void get_data(double w, double h)
    {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape
{
public:
    double area()
        {return width*height;}
};

class Triangle : public Shape
{
public:
    double area()
        {return (width*height)/2;}
};

int main()
{
    Rectangle MyRect;
    Triangle MyTri;

    MyRect.get_data(10.0,8.0);

    MyTri.get_data(5.0,5.0);

    cout<<"Area of rectangle is: "<<MyRect.area()<<endl;
    cout<<"Area of triangle is: "<<MyTri.area()<<endl;
}
