#include <iostream>
using namespace std;

int main()
{
    bool equal_result {false};
    bool not_equal_result {false};

    int num1{}, num2{};

    cout << boolalpha; // will display true/false instead of 1/0 for booleans

    cout << "Enter two integers separated by a space : ";
    cin >> num1 >> num2;

    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);

    cout << "Comparision result (equals) : " << equal_result << "\n";
    cout << "Comparision result (not equals) : " << not_equal_result << "\n";

}