#include <iostream>

using namespace std;

int main()
{
    /*
    int age = 21; // syntax var name = valie
     cout << "I am " << age << " years old";
    */

    // Sum of two number
    int x = 10;
    int y = 5;

    // int sum = x + y;

    // to declare more 1 more variable with same data type use commas
    // int a = 10, b = 5, c = 25;

    // cout << a + b + c;

    // You can also assign the same value to multiple variables in one line:
    /*
    int a, b, c;
     a = b = c = 50;
     cout << a + b + c;
    */

    // Identifier
    int minutesPerHour = 60;

    // 'const' You should always declare the variable as constant when you have values that are unlikely to change:
    const int minutesPerHour = 60;
    const float PI = 3.14;
    return 0;
}