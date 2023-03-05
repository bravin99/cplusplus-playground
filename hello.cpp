#include<iostream>
using namespace std;

string sayHello(string helo_name)
{
    cout << "Hello, " << helo_name;
    return helo_name;
}

int main()
{
    sayHello("Bravin");
    cout << "\n";
}
