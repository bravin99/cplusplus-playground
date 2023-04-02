/*
    Instructions
    Determine if a triangle is equilateral, isosceles, or scalene.
    An equilateral triangle has all three sides the same length.
    An isosceles triangle has at least two sides the same length.
    (It is sometimes specified as having exactly two sides the same length,
     but for the purposes of this exercise we'll say at least two.)
    A scalene triangle has all sides of different lengths.
    Note : For a shape to be a triangle at all, all sides have to be of length > 0,
    and the sum of the lengths of any two sides must be greater than or equal to the length of the third side.
*/
#include<iostream>

using namespace std;

void triangle_test(double a, double b, double c)
{
    if (a>0 && b>0 && c>0)
    {
        if (a+b>=c || a+c>=b || b+c>=a)
        {
            if (a==b && b==c)
                cout<<"Equilateral"<<endl;
            else if(a==b || b==c || a==c)
                cout<<"Isosceles"<<endl;
            else
                cout<<"Scalene"<<endl;

        }
        else
            cout<<"the sum of the lengths of any two sides must be greater than or equal to the length of the third side"<<endl;
    }
    else
        cout<<"all sides have to be of length > 0"<<endl;
}

int main()
{
    cout<<"\t\tTriangle Test\n"<<endl;

    while (true)
    {
        double l1, l2, l3;
        cout<<"\nEnter the triangle lengths: "<<endl;
        cout<<"length (side a): "; cin>>l1; cout<<endl;
        cout<<"length (side b): "; cin>>l2; cout<<endl;
        cout<<"length (side c): "; cin>>l3; cout<<endl;

        triangle_test(l1,l2,l3);
        cout<<"\t-----------\n"<<endl;
    }

    return 0;
}
