#include <iostream>

using namespace std;

void passArrays(int myNumbers[5]);

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    passArrays(myNumbers);
    return 0;
}

void passArrays(int myNumbers[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << endl;
    }
}