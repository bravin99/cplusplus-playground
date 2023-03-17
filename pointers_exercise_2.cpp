#include<iostream>

using namespace std;

int main()
{
    int dataset[] {};
    int array_max=0;
    int n;

    cout<<"Enter the number of elements: ";
    cin>>n;

    for (int i=0; i<=n; ++i)
    {
        int x = i;
        cout<<"Enter element "<<x+1<<": ";
        cin>>dataset[i];
    }

    for (int i=0; i<=n; i++)
    {
        if (dataset[i]>array_max)
        {
            array_max = dataset[i];
        }
    }

    int *p = &array_max;
    cout<<"The maximum value is: "<<*p<<"\n"<<endl;

    return 0;

}
