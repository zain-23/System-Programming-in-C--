#include <iostream>

using namespace std;

int main()
{
    float teaPrice = 49.99;
    int roundedTeaPrice = (int)teaPrice;

    int teaQuantity = 2;
    const float totalPrice = teaQuantity * teaPrice;

    cout << totalPrice << endl;
    return 0;
}