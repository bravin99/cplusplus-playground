/*
    Write a c++ class called 'student' with
    Data members:
    name(char type),
    marks1,marks2 (integer type)
    The program asks the user to enter name and marks.
    Then calc_media() calculates the media note and disp() display name and total media mark on screen in different lines.
*/

#include<iostream>
#include<sstream>

using namespace std;

class student
{
public:
    string name;
    int marks1, marks2, result;

    student(string n, int a, int b)
    {
        name = n;
        marks1 = a;
        marks2 = b;
    }

    void calc_media()
    {
        result = marks1+marks2;
    }

    void disp()
    {
        cout<<"\nStudent name: "<<name<<endl;
        cout<<"Total media mark: "<<result<<"\n"<<endl;
    }
};

int main()
{
    int a, b;
    string myString, nameInput;
    cout<<"Enter name: ";
    getline(cin, nameInput);
    cout<<"\n";

    cout<<"Enter mark 1: ";
    getline(cin,myString);
    stringstream(myString)>>a;
    cout<<"\n";

    cout<<"Enter mark 2: ";
    getline(cin,myString);
    stringstream(myString)>>b;
    cout<<"\n";

    student student1(nameInput, a, b);
    student1.calc_media();
    student1.disp();
}
