/*
    Your task is to convert a number into a string that contains raindrop sounds corresponding to certain potential factors.
    A factor is a number that evenly divides into another number, leaving no remainder.
    The simplest way to test if one number is a factor of another is to use the modulo operation.
        The rules of raindrops are that if a given number:
        has 3 as a factor, add 'Pling' to the result.
        has 5 as a factor, add 'Plang' to the result.
        has 7 as a factor, add 'Plong' to the result.
        does not have any of 3, 5, or 7 as a factor, the result should be the digits of the number.
*/

#include<iostream>

using namespace std;

string convert_num(int n)
{
    string result = "";
    if ((n%3)==0)
        result.append("Pling");
    if ((n%5)==0)
        result.append("Plang");
    if ((n%7)==0)
        result.append("Plong");
    if ((n%3) && (n%5) && (n%7))
        result.append(std::to_string(n));

    return result;
}

int main()
{
    int i_num;

    while (true)
    {
        cout<<"Enter a number: ";
        cin>>i_num;
        cout<<endl;

        cout<<convert_num(i_num)<<"\n__________"<<endl;
    }

    return 0;
}
