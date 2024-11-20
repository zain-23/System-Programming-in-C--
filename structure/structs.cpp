#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*

    struct
    {
        int myNum;
        string myString;
    } myStructure;

    myStructure.myNum = 1;
    myStructure.myString = "Syed Zain Ali Shah";

    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;
    */

    // Named Structure
    struct Car
    {
        string brand;
        string model;
        int year;
    };

    Car car1;
    car1.brand = "Suzuki";
    car1.model = "Alto VXR";
    car1.year = 2016;

    cout << car1.brand << endl;
    cout << car1.model << endl;
    cout << car1.year << endl;
    return 0;
}