#include<iostream>
using namespace std;

int main()
{
    string farmerName;
    string IdNumber;
    double milksold;
    double totalmilksold;
    double averagemilksold;
    double payablePrice;

    cout<<"Enter name of the farmer: ";
    cin>>farmerName;
    cout<<"\n";
    cout<<"Enter farmer Id Number: ";
    cin>>IdNumber;
    cout<<"\n";

    for (int x=1; x<=7; x++)
    {
        cout<<"Enter milk sold: ";
        cin>>milksold;

        totalmilksold+=milksold;
    }
    cout<<"\n"<<endl;
    cout<<"Total milk sold: "<<totalmilksold<<" Litres"<<endl;

    averagemilksold = totalmilksold / 7;
    cout<<"Average milk sold: "<<averagemilksold<<" Litres"<<endl;

    payablePrice = totalmilksold * 40;
    cout<<"Amount payable: KES "<<payablePrice<<endl;
    cout<<"\n";

    return 0;

}
