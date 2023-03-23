#include<iostream>

using namespace std;

string convert_to_binary(int a)
{
    string result;
    while (a != 0)
    {
        result = (a%2==0 ? "0" : "1")+result;
        a /= 2;
    }
    return result;
}

int main()
{
    int n = 10;
    cout<<"binary for "<<n<<", is "<<convert_to_binary(n)<<"\n"<<endl;
}
