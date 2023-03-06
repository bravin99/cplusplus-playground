#include<iostream>
using namespace std;

int global_int; // global variable , static storage, imediately initialized to 0

void sample_function()
{
    int local_int; // local variable, automatic storage, its space can be used outside the scope o this function, left uninitialized
}

void innner_and_outer_blocks()
{
    // outer block initialization
    int x = 10;
    int y = 20;
    // inner block
    {
        int x; // declaring this variable hides the one from the outer block
        x = 100; // assigns to the declaration in this inner block
        y = 100; // updates the variable y in the outer block since it is still visible to this inner block
        std::cout<<"Inner block x: "<<x<<std::endl;
        std::cout<<"Inner block y: "<<y<<std::endl;
    }
    std::cout<<"Outer block x: "<<x<<std::endl;
    std::cout<<"Outer block y: "<<y<<std::endl;
}

// namespaces: helps avoid name collisions
// example namespace
namespace student
{
    int age;
    double math;
    double eng;

    double mean_grade(double a, double b)
    {
        return (a + b) / 2;
    }
}
int main()
{
    innner_and_outer_blocks();
    std::cout<<"\n";
    // using namespace to access objects
    student::age = 19;
    student::eng = 89;
    student::math = 76;
    double student_mean = student::mean_grade(student::math, student::eng);
    std::cout<<"Student mean grade using namespaces: "<<student_mean<<std::endl;
}
