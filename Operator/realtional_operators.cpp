/*
    Relational Operators
    >   - greater than
    >=  - greater than or equal to
    <   - less than
    <=  - less than or euqal to
    <=> - three-way comparison (C++20)
*/
#include <iostream>
using namespace std;

int main()
{
    int num1{}, num2{};

    cout << boolalpha;
    cout << "Enter 2 integers separeate by a space : ";
    cin >> num1 >> num2;

    cout << num1 << ">" << num2 << ": " << (num1 > num2) << "\n";
    cout << num1 << ">=" << num2 << ": " << (num1 >= num2) << "\n";
    cout << num1 << "<" << num2 << ": " << (num1 < num2) << "\n";
    cout << num1 << "<+" << num2 << ": " << (num1 <= num2) << "\n";

    const int lower {10};
    const int upper {20};

    cout << "\n Enter an integer that is greater than " << lower << " : ";
    cin >> num1;
    cout << num1 << " > " << lower << " is " << ( num1 > lower) << "\n";

    cout << "\n Enter an integer that is less that or equal to " << upper << " : ";
    cin >> num2;
    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << " \n ";

    return 0;


}