#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string my_string;
    ifstream FileToRead("test_read.txt");

    while (getline (FileToRead, my_string))
    {
        cout<<my_string<<endl;
    }

    FileToRead.close();
}
