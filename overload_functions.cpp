#include<iostream>
using namespace std;

// overloaded functions start
int calculate(int a, int b)
{
    return a + b;
}

double calculate(double a, double b)
{
    return a - b;
}

int calculate(int a, int b, int c)
{
    return a + b + c;
}
// overloaded functions end

int main()
{
    std::cout<<"Integer calculation for 7 \& 3: "<<calculate(7,3)<<endl;
    std::cout<<"Double calculation for 20 \& 10: "<<calculate(20.0,10.0)<<endl; // NB: Pass a double
    std::cout<<"Calculate with 3 parameters: "<<calculate(12,12,12)<<endl;
}
