#include <iostream>
#include <string>

using namespace std;
// Function declaration
void myFunction();

int main()
{
    myFunction();
    myFunction();
    myFunction();
    return 0;
}

void myFunction()
{
    // code to be executed
    cout << "My function called" << endl;
}