#include <iostream>
#include <string>

using namespace std;
// Function declaration
void myFunction(string fname, int age);

int main()
{
    myFunction("Zain", 10);
    myFunction("Ali", 21);
    myFunction("Hasin", 17);
    return 0;
}

void myFunction(string fname, int age)
{
    // code to be executed
    cout << "My name is " << fname << " and my age is " << age << endl;
}