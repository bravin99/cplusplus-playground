#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    string myInputs;
    int n;
    int sum = 0;

    cout<<"Enter a number: ";
    getline(cin,myInputs);
    stringstream(myInputs)>>n;

    for (int x=1; x<=n; ++x)
    {
        sum = sum+x;
    }
    cout<<"The sum of all natural numbers upto "<<n<<" is: "<<sum<<endl;
}
