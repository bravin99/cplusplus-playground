/*
    You have done this exercise before, but now you are ask to do this exercise using overloaded operators.
    Perform addition operation on complex data using class and object.
    The program should ask for real and imaginary part of two complex numbers,
    and display the real and imaginary parts of their sum.
*/
#include<iostream>

using namespace std;

class Imagin
{
public:
    double x,y;
    Imagin(){}
    Imagin(double r, double i)
    {x=r; y=i;}
};

Imagin operator+(const Imagin &num1, const Imagin &num2)
{
    Imagin temp;
    temp.x = num1.x + num2.x;
    temp.y = num1.y + num2.y;
    return temp;
}

int main()
{
    double nu1,nu2;
	cout << "Enter first number \n";
	cout<< "Enter the real part:";
	cin>> nu1;
	cout<< "Enter the imaginary part:";
	cin>> nu2;
	Imagin number1(nu1,nu2);

	double nu3,nu4;
	cout << "\nEnter second number \n";
	cout<< "Enter the real part:";
	cin>> nu3;
	cout<< "Enterthe imaginary part:";
	cin>> nu4;
	Imagin number2(nu3,nu4);

	Imagin result;
	result = number1+number2;
	cout << "\nThe complex sum result is: "<<result.x + result.y <<"i \n";
}
