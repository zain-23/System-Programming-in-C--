#include <iostream>
#include <string>

using namespace std;

int main()
{
    string teaName;
    int quantity;

    cout << "What would you like in Tea\n";
    cin >> teaName;

    cout << "How many cup of" << teaName << " you want" << endl;
    cin >> quantity;

    cout << teaName << endl;
    cout << quantity << endl;
    return 0;
}