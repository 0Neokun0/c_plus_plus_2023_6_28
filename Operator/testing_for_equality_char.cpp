#include <iostream>
using namespace std;

int main()
{
    bool equal_result {false};
    bool not_equal_result {false};

    char char1{}, char2{};
    cout << "Enter two characters separated by space : ";

    cin >> char1 >> char2;

    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);

    cout << boolalpha; // will display true/false instead of 1/0 for booleans

    cout << "Comparision result (equals) : " << equal_result << "\n";
    cout << "Comparision result (not equals) : " << not_equal_result << "\n";

}