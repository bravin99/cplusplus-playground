/*
    Write a program that prints on the screen all the even numbers up to 10.
*/
#include<iostream>
#include<sstream>

using namespace std;

void even_numbers_to_ten()
{
    int num_array[] {1,2,3,4,5,6,7,8,9,10};

    for (int num : num_array)
    {
        if (num%2 == 0)
            cout<<num<<", ";
    }
}

int main()
{
    cout<<"Even numbers upto 10: \n"<<endl;
    even_numbers_to_ten();
    cout<<"\n";
}
