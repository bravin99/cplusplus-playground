#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,3> libArray = {15,30,45}; // library array

    std::cout<<"Printing library array: \n"<<std::endl;
    for (int elem : libArray)
    {
        std::cout<<elem<<std::endl;
    }

    return 0;
}
