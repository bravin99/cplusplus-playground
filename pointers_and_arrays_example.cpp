#include<iostream>

using namespace std;

int main()
{
    int * mypointer;
    int example1[5];

    // mypointer = &example1;
    // OR alternatively
    mypointer = example1;
    *mypointer = 10; //first value
    mypointer++; // adjust pointer location by +1
    *mypointer = 20; // second value in array
    mypointer = &example1[2]; //point to the third address of the array
    *mypointer = 30; // assign third value in the array
    mypointer = example1 + 3; // point to the 4th value address of the array
    *mypointer = 40;
    mypointer = example1; // point to the array address
    *(mypointer+4) = 50; // point to the fifth value in the array and asign value=50

    for (int i=0; i<5; ++i)
    {
        if (i==4)
        {
            cout<<example1[i]<<".";
            break;
        }
        cout<<example1[i]<<", ";
    }
}
