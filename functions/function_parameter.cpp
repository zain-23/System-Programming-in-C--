#include <iostream>
#include <string>

using namespace std;
// Function declaration
void myFunction(string fname);

int main()
{
    myFunction("Zain");
    myFunction("Ali");
    myFunction("Shah");
    return 0;
}

void myFunction(string fname)
{
    // code to be executed
    cout << "Argument: " << fname << endl;
}