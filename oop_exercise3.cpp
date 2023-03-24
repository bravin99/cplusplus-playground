/*
    Write a program with a mother class animal.
    Inside it define a name and an age variables, and set_value() function.
    Then create two bases variables Zebra and Dolphin which write a message telling the age,
    the name and giving some extra information (e.g. place of origin).
*/

#include<iostream>

using namespace std;

class Animal
{
protected:
    string name;
    int age;
public:
    void set_value(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Zebra : public Animal
{
public:
    string origin = "Africa";
    void display()
    {
        cout<<"Zebra"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<" years"<<endl;
        cout<<"Origin: "<<origin<<"\n------------------"<<endl;

    }
};

class Dolphin : public Animal
{
public:
    string origin = "Antactica";
    void display()
    {
        cout<<"Dolphin"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<" years"<<endl;
        cout<<"Origin: "<<origin<<"\n------------------"<<endl;
        cout<<"\n";
    }
};

int main()
{
    Zebra z;
    Dolphin d;

    z.set_value("Tim", 5);
    d.set_value("Slay", 2);

    z.display();
    d.display();
    return 0;
}
