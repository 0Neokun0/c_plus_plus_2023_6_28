#include <iostream>
using namespace std;

int main()
{
    bool equal_result {false};
    bool not_equal_result {false};

    int int1{}, int2{};
    cout << "Enter two integers separated by space : ";

    cin >> int1 >> int2;

    equal_result = (int1 == int2);
    not_equal_result = (int1 != int2);

    cout << boolalpha; // will display true/false instead of 1/0 for booleans

    cout << "Comparision result (equals) : " << equal_result << "\n";
    cout << "Comparision result (not equals) : " << not_equal_result << "\n";

}