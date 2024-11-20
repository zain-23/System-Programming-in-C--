#include <iostream>

using namespace std;

int main()
{
    int day = 4;
    switch (day)
    {
    case 0:
        cout << "Monday";
        break;
    case 1:
        cout << "Tuesday";
        break;
    case 2:
        cout << "Wednesday";
        break;
    case 3:
        cout << "Thursday";
        break;
    case 4:
        cout << "Friday";
        break;
    case 5:
        cout << "Saturday";
        break;
    case 6:
        cout << "Sunday";
        break;
    default:
        cout << "There is no days";
        break;
    }
    return 0;
}