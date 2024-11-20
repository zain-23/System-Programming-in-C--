#include <iostream>

using namespace std;

int main()
{
    // Break Example
    /*

    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            cout << "Found";
            break;
        }
        cout << i << "\n";
    }
    */

    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            // cout << "Found";
            continue;
        }
        cout << i << "\n";
    }

    return 0;
}