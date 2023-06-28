#include <iostream>
using namespace std;

int main()
{
    int num1 {10};
    int num2 {20};
    // Logic is 
    // lhs = rhs
    num1 = 100; // Output will be 100
    num1 = num2; // Output will be same as num2 i.e 20
    num1 = num2; // Output will be same as num1 i.e 100
    num1 = num2 = 1000; // Output will be 1000, value flows from right to left
    
    cout << "num1 is " << num1 << "\n";
    cout << "num2 is " << num2 << "\n";

    return 0;

}