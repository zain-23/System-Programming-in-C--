#include <iostream>

using namespace std;

int x = 20;
void myAge()
{
    int x = 19; // local variable
    cout << x << endl;
}

int main()
{
    myAge();
    cout << x;
    return 0;
}