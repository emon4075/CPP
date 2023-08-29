#include <iostream>  // Include the input-output stream library
#include <iomanip>   // Include the input-output manipulator library
using namespace std; // Using the standard namespace

int main() // Main function where program execution begins
{
    float n1, n2, sum, sub, mul, div, rem; // Declare variables for numbers and operations

    cout << "Enter Two Numbers: "; // Prompt user to input two numbers
    cin >> n1 >> n2;               // Read and store two numbers from user input

    cout << showpoint; // Show decimal point and trailing zeros for floating-point output
    sum = n1 + n2;
    cout << setw(20) << "Sum is: " << sum << endl; // Display the sum with setw for formatting

    cout << fixed;           // Set floating-point output to fixed notation (no scientific notation)
    cout << setprecision(2); // Set the precision of floating-point numbers to 2 decimal places
    sub = n1 - n2;
    cout << setw(20) << "Subtraction Is: " << sub << endl; // Display the subtraction with setw for formatting

    cout << noshowpoint; // Disable showing decimal point and trailing zeros
    mul = n1 * n2;
    cout << setw(20) << "Multiplication Is: " << mul << endl; // Display the multiplication with setw for formatting

    cout << setprecision(10); // Set the precision of floating-point numbers to 10 decimal places
    div = n1 / n2;
    cout << setw(20) << "Division Is: " << div << endl; // Display the division with setw for formatting

    // Remainder works only for int values, so we cast n1 and n2 to int
    rem = (int)n1 % (int)n2;
    cout << setw(20) << "Reminder Is: " << rem << endl; // Display the remainder with setw for formatting

    return 0; // Return 0 to indicate successful program execution
}
