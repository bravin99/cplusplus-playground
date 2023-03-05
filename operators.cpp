#include<iostream>
using namespace std;

// c++ operators

int main()
{
    // assignment operator '='
    int a, b; //declare variables
    a = 10; b = 5; // assign 10 to variable a, and 5 to variable b
    std::cout<<"a: "<<a<<", b: "<<b<<endl;

    // arithmetic operators ( +, -, *, /, % )
    int c_plus = 2 + 2;
    cout<<"c_plus = "<<c_plus<<endl;
    int c_minus = 5 - 2;
    cout<<"c_minus = "<<c_minus<<endl;
    int c_multiply = 2 * 3;
    cout<<"c_multiply = "<<c_multiply<<endl;
    float c_divide = 10 / 2;
    cout<<"c_divide = "<<c_divide<<endl;
    float c_modulo = 10 % 3;
    cout<<"c_modulo = "<<c_modulo<<endl;

    // compound assignment (+=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |=)
    int c_add_to = 10;
    c_add_to += 5;
    cout<<"c_add_to = "<<c_add_to<<endl;

    // Increment and decrement (++, --)
    int inc_x = 5;
    int inc_y = ++inc_x; // increments both inc_x and inc_y
    cout<<"inc_y = "<<inc_y<<", inc_x = "<<inc_x<<endl;
    inc_y = inc_x++; // increments only inc_x
    cout<<"inc_y = "<<inc_y<<", inc_x = "<<inc_x<<endl;

    // Relational and comparison operators ( ==, !=, >, <, >=, <= )
    int age = 10;
    bool check_age = (age!=10);
    cout<<check_age<<endl;

    // Logical operators ( !, &&, || )
    cout<<!true<<endl; // negation
    cout<<(6==6 && 5==5)<<endl; // return true if both are true, both expressions must evaluate to true
    cout<<(5==4 || 6==6)<<endl; //return true if atleast one expression evaluates to true

    // Conditional ternary operator ( ? )
    cout<<(7 == 6 + 1 ? "Expression is true" : "Expression is false")<<endl;

    // Comma operator ( , )-separate expressions
    int todays_eggs;
    int monthly_eggs = (todays_eggs=120, todays_eggs+980); // assign 120 to todays_eggs the assign todays_eggs+980 to monthly_eggs
    std::cout<<"Monthly eggs: "<<monthly_eggs<<endl;

    // Bitwise operators ( &, |, ^, ~, <<, >> )
    // Bitwise operators modify variables considering the bit patterns that represent the values they store.

    // Explicit type casting operator "()"
    int grade;
    float mean_grade = 3.48;
    grade = (int) mean_grade;
    cout<<"Grade: "<<grade<<endl;

    // sizeof
    /* This operator accepts one parameter, which can be either a type or a variable, and returns the
    size in bytes of that type or object */
    int houses;
    int size_houses = sizeof(houses);
    std::cout<<"Size of houses: "<<size_houses<<endl;

    // Precedence of operators
    // A single expression may have multiple operators.
    int area = 2 * (50+10) + 300;
    std::cout<<"Area: "<<area<<endl;
}
