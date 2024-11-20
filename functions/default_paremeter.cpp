#include <iostream>
#include <string>

using namespace std;
// Function declaration
void myFunction(string country);

int main()
{
    myFunction("USA");
    myFunction();
    myFunction("Dubai");
    return 0;
}

void myFunction(string country = "Pakistan")
{
    // code to be executed
    cout << "Argument: " << country << endl;
}