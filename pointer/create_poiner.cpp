#include <iostream>
#include <string>

using namespace std;

int main()
{
    // A pointer however, is a variable that stores the memory address as its value.
    /*
    string food = "Pizza";
    string *ptr = &food;
    cout << ptr;

    */

    // Dereference
    string food = "Pizza";
    string *ptr = &food;

    cout << *ptr;
    return 0;
}