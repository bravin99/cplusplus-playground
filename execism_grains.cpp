/*
Calculate the number of grains of wheat on a chessboard given that the number on
each square doubles.Calculate the number of grains of wheat on a chessboard given
that the number on each square doubles.
There are 64 squares on a chessboard (where square 1 has one grain, square 2 has
    two grains, and so on).
Write code that shows:
    how many grains were on a given square, and,
    the total number of grains on the chessboard
*/

#include<iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using boost::multiprecision::cpp_int;

int main()
{
    int square_number = 64;
    cpp_int grains_on_square = 1; // initialize with grains on 1st square
    cout << "Square 1: " << grains_on_square << endl;
    cpp_int total_grains = grains_on_square;

    for (int g = 2; g <= square_number; ++g) {
        grains_on_square *= 2;
        total_grains += grains_on_square;
        cout << "Square " << g << ": " << grains_on_square << endl;
    }
    cout << "\nTotal Grains: " << total_grains << endl;

    return 0;
}
