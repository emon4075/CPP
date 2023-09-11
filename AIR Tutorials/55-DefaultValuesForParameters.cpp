#include <iostream> // Include the input/output stream library for using cout.

using namespace std; // Use the standard namespace to simplify code.

// Function 'Display1' with default values for 'a' and 'b'.
void Display1(int a = 10, int b = 20)
{
    cout << a << endl; // Display the value of 'a'.
    cout << b << endl; // Display the value of 'b'.
}

// Function 'Display2' with a default value for 'b'.
void Display2(int a, int b = 25)
{
    cout << a << endl; // Display the value of 'a'.
    cout << b << endl; // Display the value of 'b'.
}

int main()
{
    Display1(12); // Call 'Display1' with 'a' set to 12, which overrides the default value of 'a'.
    cout << "-------------------------" << endl;
    Display2(110, 23); // Call 'Display2' with 'a' set to 110 and 'b' set to 23.
    cout << "-------------------------" << endl;
    Display1(); // Call 'Display1' with no arguments, using the default values of 'a' and 'b'.
    cout << "-------------------------" << endl;

    return 0; // Return 0 to indicate successful program execution.
}