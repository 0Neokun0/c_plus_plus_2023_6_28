/*
    not !  - negation
    and && - logical and
    or  ||  - logical or
*/
#include <iostream>
using namespace std;

int main()
{
    int num{};
    const int lower{10};
    const int upper{20};

    cout << boolalpha;

    // Determine if an entered integer is between two other integers
    // assume lower < upper
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
    cin >> num;

    bool outside_bounds {false};

    outside_bounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " and " << upper << " : " << outside_bounds << "\n";

}