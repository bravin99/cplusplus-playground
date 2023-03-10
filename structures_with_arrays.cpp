#include<iostream>
#include<sstream>
#include<string>

using namespace std;

struct movies_t
{
    string title;
    int year;
} movie_list[3];


void printmovies(movies_t movies);

int main()
{
    string myString;
    for (int x=0; x<=2; ++x)
    {
        cout<<"Enter movie title: ";
        getline(cin,movie_list[x].title);
        cout<<"\n";
        cout<<"Enter movie release year: ";
        getline(cin, myString);
        stringstream(myString)>>movie_list[x].year;
        cout<<"\n";
    }

    cout<<"\nYour movie list: "<<"\n";
    for (int n=0; n<3; ++n)
    {
        printmovies(movie_list[n]);
    }

}

void printmovies(movies_t movie)
{
    cout<<movie.title<<"\t \t Year: "<<movie.year<<endl;
}
