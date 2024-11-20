#include <iostream>
#include <string>

using namespace std;
// Function declaration
void swapNumber(int &x, int &y);

int main()
{
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before Swap" << endl;
    cout << firstNum << ":" << secondNum << "\n";

    swapNumber(firstNum, secondNum);

    cout << "After Swap" << endl;
    cout << firstNum << ":" << secondNum << "\n";

    return 0;
}

void swapNumber(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}