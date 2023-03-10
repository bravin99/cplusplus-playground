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
    string days_of_week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    cout<<"Enter name of the farmer: ";
    cin>>farmerName;
    cout<<"\n";
    cout<<"Enter farmer Id Number: ";
    cin>>IdNumber;
    cout<<"\n";

    for (int x=0; x<=6; ++x)
    {
        cout<<"Enter milk sold on "<<days_of_week[x]<<": ";
        cin>>milksold;

        totalmilksold+=milksold;
    }
    cout<<"\n"<<endl;
    cout<<"Total milk sold: "<<totalmilksold<<" Litres"<<endl;

    averagemilksold = totalmilksold / 7;
    cout<<"Average milk sold per day: "<<averagemilksold<<" Litres"<<endl;

    payablePrice = totalmilksold * 40;
    cout<<"Amount payable: KES "<<payablePrice<<endl;
    cout<<"\n";

    return 0;

}
