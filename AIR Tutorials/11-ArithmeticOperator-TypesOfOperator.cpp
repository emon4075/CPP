#include <iostream> // Include the input-output stream library

using namespace std; // Using the standard namespace

int main() // Main function where program execution begins
{
    int n1, n2, sum, sub, mul; // Declare variables for numbers and operations
    float div, rem;            // Declare variables for division and remainder

    cout << "Enter Two Numbers: "; // Prompt user to input two numbers
    cin >> n1 >> n2;               // Read and store two numbers from user input

    sum = n1 + n2;                     // Calculate the sum of the two numbers
    cout << "Sum is: " << sum << endl; // Display the sum

    sub = n1 - n2;                             // Calculate the difference between the two numbers
    cout << "Subtraction Is: " << sub << endl; // Display the subtraction result

    mul = n1 * n2;                                // Calculate the product of the two numbers
    cout << "Multiplication Is: " << mul << endl; // Display the multiplication result

    div = (float)n1 / n2;                   // Calculate the division of the two numbers (casting n1 to float for accurate division)
    cout << "Division Is: " << div << endl; // Display the division result

    rem = n1 % n2;                          // Calculate the remainder of the division
    cout << "Reminder Is: " << rem << endl; // Display the remainder

    return 0; // Return 0 to indicate successful program execution
}
