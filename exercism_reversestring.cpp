/*
    Reverse a string
    For example: input: "cool" output: "looc"
*/
#include<iostream>

using namespace std;

string reverse_word(string w)
{
    string reverse_word;
    for (int x=w.length(); x>=0; --x)
    {
        reverse_word += w[x];
        if (x==0) break;
    }
    return reverse_word;
}

int main()
{
    string word;
    cout<<"Enter a word: ";
    getline(cin,word);
    cout<<endl;

    cout<<"Reverse for "<<word<<" is: "<<reverse_word(word);

    return 0;
}
