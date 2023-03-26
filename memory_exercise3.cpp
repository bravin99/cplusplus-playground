#include<iostream>

using namespace std;

class IntegerArray
{
public:
    int *data;
    int size;
    IntegerArray(int size)
    {
        data = new int[size];
        this->size = size;
    }
    IntegerArray(IntegerArray &a)
    {
        data = new int[a.size];
        size = a.size;
        for (int x=0; x<size; ++x)
        {
            data[x] = a.data[x];
        }
    }
    ~IntegerArray()
    {
        delete[] data;
    }
};

// Write a program containing a constructor and a destructor for an array.The body shuld be :
// Note: Pass the data to the data_construtor by reference.
int main()
{
    IntegerArray a(2);
    a.data[0] = 4;
    a.data[1] = 2;

    if (true)
    {
        IntegerArray b = a;
    }

    cout<<a.data[0]<<endl;

    return 0;
}
