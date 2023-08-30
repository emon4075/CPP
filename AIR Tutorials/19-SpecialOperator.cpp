#include <iostream>
using namespace std;

int main()
{
    // Declare a character array 'name' with a size of 20 characters
    char name[20];

    // Use of sizeof operator to display the size of different data types in bytes
    cout << "Size of Integer is: " << sizeof(int) << " bytes" << endl;
    cout << "Size of Float is: " << sizeof(float) << " bytes" << endl;
    cout << "Size of Character is: " << sizeof(char) << " bytes" << endl;
    cout << "Size of Double is: " << sizeof(double) << " bytes" << endl;

    // Display the size of the 'name' character array in bytes
    cout << "Size of Character array 'name' is: " << sizeof(name) << " bytes" << endl;

    // Declare integer variables 'x', 'y', and 'sum'
    int x = 5, y = 6, sum;

    // Use of the comma operator to calculate the sum of 'x' and 'y', with the value of 'y' being discarded
    sum = (x, y, x + y);

    // Display the calculated sum
    cout << "Sum is: " << sum << endl;

    // Indicate successful completion of the program
    return 0;
}
