#include<iostream>
using namespace std;

int myarray [5] {54,45,67,544};
int n, result=0;

int multideminsional_array [3][4]
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };

void print_array(int args[], int s);

// Accessing multidimensional array
void print_multideminsional_array(int args[3][4], int a , int b)
{
    cout<<"\n";
    cout<<"Printing multidimensional array:"<<endl;
    cout<<"\n";
    for (int h=0; h<a; ++h)
    {
        for (int k=0; k<b; ++k)
        {
            cout<<"multideminsional_array["<<h<<"]"<<"["<<k<<"]: ";
            cout<<multideminsional_array[h][k]<<endl;
        }
    }
}

int main()
{
    for (n=0; n<5; ++n)
    {
        result += myarray[n];
    }
    cout<<"Adding array 1 results: "<<result<<"\n";

    print_array(myarray, 4);  // include an int to tell the function the size of the array
    print_multideminsional_array(multideminsional_array, 4, 3);
}

void print_array(int args[], int s)
{
    cout<<"Printing array 2: \n";
    for (n=0; n<s; ++n)
    {
        cout<<myarray[n]<<endl;
    }
}
