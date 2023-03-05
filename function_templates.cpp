#include<iostream>

// function templates -  functions defined with generic types
// more efficient than using function overloads

template <class T>
T sum(T a, T b)
{
    T result;
    result = a + b;
    return result;
}

template <class T, class U>
bool are_equal(T a, U b)
{
    return (a==b);
}

// non-type template arguments
template <class T, int N>
T fixed_sum(T a)
{
    return a + N;
}

int main()
{
    std::cout<<"Double result: "<<sum<double>(10.5,1.0)<<std::endl;
    std::cout<<"Integer results: "<<sum<int>(10,1)<<std::endl;

    if (are_equal<int, double>(5,5.0))
    {
        std::cout<<"5 and 5.0 are equal"<<std::endl;
    }
    else
        std::cout<<"5 and 5.0 are not equal"<<std::endl;

    // calling non-type template
    std::cout<<"fixed_sum template result: "<<fixed_sum<int,50>(23)<<std::endl;
}
