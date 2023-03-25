/*
    Given the following code add a destructor for Foo class.
    #include <iostream>
    class Foo {
    public:
        Foo( void )
        { std::cout << "Foo constructor 1 called" << std::endl; }
    int main( )
    {
        Foo foo_1;
        return 0;
    }
*/
#include <iostream>
using namespace std;

class Foo {
public:
	Foo( void )
    { cout<<"Foo constructor 1 called" <<endl; }
    ~Foo( void )
    {cout<<"Destructor called"<<endl; }
};

int main( int argc, char **argv )
{
    Foo foo;
    return 0;
}
