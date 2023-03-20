/*
    Write a program that asks for an index and a number.
    Then it includes the number at the indicated index of the array={1,2,3,4,5,6}
    and moves a position forward (from u to u+1) each element after the selected index.
*/

#include<iostream>

using namespace std;

int main()
{
    int my_array[6] {1,2,3,4,5,6};
    int index_no, number;

    cout<<"The initialized array: ";
    for (int l : my_array)
    {
        cout<<l<<", ";
    }

    cout<<"\n"<<endl;

    cout<<"Enter the index of the number (0-6): ";
    cin>>index_no;
    cout<<"\n"<<endl;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"\n"<<endl;

    for(int u=6; u>index_no; u=u-1)
    {
        my_array[u]=my_array[u-1];
	 }

	my_array[index_no]=number;

    cout<<"Updated index: ";
    for(int i=0; i<=6; i++)
    {
        cout<<my_array[i]<<", ";
    }
}
