#include <iostream>

using namespace std;

int main()
{
    bool isCodingFun = true;
    bool isFishTasty = false;

    /*
        cout << isCodingFun << endl; // Outputs 1 (true)
        cout << isFishTasty;         // Outputs 0 (false)
    */

    int myAge = 17;
    int voteAge = 18;

    if (myAge >= voteAge)
    {
        cout << "Old enough to vote!";
    }
    else
    {
        cout << "Not enough to vote ):";
    }

    return 0;
}