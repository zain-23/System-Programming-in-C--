#include <iostream>
#include <string>

using namespace std;

int main()
{
    enum Level
    {
        LOW = 5,
        MEDIUM,
        HIGH
    };

    enum Level myVar = MEDIUM;
    cout << myVar;
    return 0;
}