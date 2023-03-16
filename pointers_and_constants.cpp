#include<iostream>

using namespace std;

void increment_all(int * start, int * stop)
{
    int * current = start;
    while (current != stop)
    {
        ++(*current); //increment value pointed
        ++current; // increment pointer;
    }
}

void print_all(const int * start, const int * stop)
{
    const int * current = start;
    while (current != stop)
    {
        cout<<*current<<endl;
        ++current; // increment pointer
    }
}

int main()
{
    //int x;
    //int y = 10;
    //const int * p = &y;
    //x = *p;  // only read-only actions allowed
    //cout<<x<<endl;

    int numbers[] = {10,20,30,40,50};
    increment_all(numbers, numbers+5);
    print_all(numbers, numbers+5);

    //char chew[] = {'B','a','k','a','\0'};
    //for (char c : chew) cout<<c<<endl;

    return 0;
}
