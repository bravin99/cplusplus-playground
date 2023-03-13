#include<iostream>
using namespace std;

int main()
{
    int firstvalue, secondvalue;
    int * mypointer; // use to point at speciic variale addresses

    mypointer = &firstvalue; // point at firstvalue address
    *mypointer = 10; // change the value of firtvalue to 10
    mypointer = &secondvalue; // change the pointer to secondvalue
    *mypointer= 20; // chnge the value of secondvalue to 20

    // prints firstvalue = 10
    std::cout<<"First value: "<<firstvalue<<std::endl;
    // prints secondvalue = 20
    std::cout<<"Second value: "<<secondvalue<<std::endl;

    return 0;
}
