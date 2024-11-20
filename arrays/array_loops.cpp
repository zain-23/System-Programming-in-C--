#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    for (int i = 0; i < cars->length(); i++)
    {
        cout << cars[i] << endl;
    }
    return 0;
}