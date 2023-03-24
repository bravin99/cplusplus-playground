/*
    Write a program with a mother class and an inherited daugther class.
    Both of them should have a method void display ()that prints a message (different for mother and daugther).
    In the main define a daughter and call the display() method on it.
*/

#include<iostream>
using namespace std;

class Mother
{
public:
    void display()
    {
        cout<<"Hello, I am the mmother"<<endl;
    }
};

class Daughter : public Mother
{
public:
    void display()
    {
        cout<<"Hello, I am the daughter"<<endl;
    };

};

int main()
{
    Daughter d1;
    d1.display();
}
