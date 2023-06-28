#include <iostream>
using namespace std;

int main()
{
    bool equal_result {false};
    bool not_equal_result {false};

    double double1{}, double2{};
    cout << "Enter two doubles separated by space : ";

    cin >> double1 >> double2;

    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);

    cout << boolalpha; // will display true/false instead of 1/0 for booleans

    cout << "Comparision result (equals) : " << equal_result << "\n";
    cout << "Comparision result (not equals) : " << not_equal_result << "\n";

}