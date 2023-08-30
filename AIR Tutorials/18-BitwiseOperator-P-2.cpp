#include <iostream>
using namespace std;

int main()
{
    // Declare an integer variable 'a' and initialize it with the value 15
    int a = 15, c;

    // Right shift 'a' by 2 bits and store the result in 'c'
    c = a >> 2;

    // Display the result of the right shift operation
    cout << "Right Shift By 2 digits: " << c << endl;

    // Left shift 'a' by 3 bits and store the result in 'c'
    c = a << 3;

    // Display the result of the left shift operation
    cout << "Left Shift By 3 digits: " << c << endl;

    // Indicate successful completion of the program
    return 0;
}
