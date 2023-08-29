#include <iostream>  // Include the input-output stream library
using namespace std; // Using the standard namespace

int main() // Main function where program execution begins
{
    double base, height, area; // Declare variables for base, height, and area

    cout << "Enter the base: " << endl; // Prompt user to input the base
    cin >> base;                        // Read and store the base from user input

    cout << "Enter the height: " << endl; // Prompt user to input the height
    cin >> height;                        // Read and store the height from user input

    // Calculate the area using the formula: area = (1/2) * base * height
    area = (double)1 / 2 * base * height;
    // Alternatively, you can use either of these lines to achieve the same calculation:
    // area = 0.5 * base * height;
    // area = (1.0 / 2) * base * height;

    cout << "Area is: " << area << " sq units" << endl; // Display the calculated area

    return 0; // Return 0 to indicate successful program execution
}
