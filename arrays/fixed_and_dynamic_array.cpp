#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford"};

    cars.push_back("Suzuki");
    cout << cars[cars.size() - 1];
    return 0;
}