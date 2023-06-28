/*
    Increment operator ++
    Decrement operator --
    
    Increments or decrements its operand by 1
    Can be used with integers, floating point types and poitner
    
    Prefix ++num
    Postfix num++
    
    Don't overuse this operator!
    ALERT !!! Never use it twice for the same variable in the same statement !!
*/
#include <iostream>
using namespace std;

int main()
{
    int counter{10};
    int result{0};

    // Simple increment
    /*
        This statements means the same thing
        counter = counter + 1
        counter++
        ++counter
    */
    cout << "Incrementing ======================================\n\n";
    cout << "Original counter Value : " << counter << "\n";

    counter = counter + 1; // Output 10 + 1 = 11
    cout << "Counter = counter + 1 : " << counter << "\n";
    counter++;
    cout << "Counter++ : " << counter << "\n"; // Ouput 11 + 1 = 12
    ++counter;
    cout << "++Counter : " << counter << "\n\n"; // Output 12 + 1 = 13

    cout << "Pre-Increment ===============================================\n\n";

    int increment{10};
    result = 0;
    cout << "Original number before Increment : " << increment << "\n";

    result = ++increment;
    cout << "Increment : " << increment << "\n"; // Output 10 + 1 = 11
    cout << "Result : " << result << "\n\n";     // Ouput same incremented value 11

    cout << "Post-Increment ==============================================\n\n";

    int post_increment = 10;
    result = 0;
    cout << "Original number before Post-Increment : " << post_increment << "\n";

    result = post_increment++;
    cout << "Post-Increment : " << post_increment << "\n"; // Output 10 + 1 = 11
    cout << "Result : " << result << "\n\n"; // Output 10

    cout << "Incrementing the number ======================================\n\n";

    int incrementing = 10;
    result = 0;
    cout << "Original Incrementing : " << incrementing << "\n";

    result = ++incrementing + 10;
    cout << "Incrementing  : " << incrementing << "\n";
    cout << "Result : " << result << "\n";

    cout << "Post-Incrementing the number ==================================\n\n";

    int post_incrementing = 10;
    result = 0;
    cout << "Original Post-Incrementing " << post_incrementing << "\n";

    result = post_incrementing++ + 10;
    cout << "Post-Incrementing : " << post_incrementing << "\n";
    cout << "Result : " << result << "\n\n";

    return 0;
}