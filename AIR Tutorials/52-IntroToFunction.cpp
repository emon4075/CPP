#include <iostream>

using namespace std;

// Function to add two integers and print the result
void add(int a, int b)
{
    int sum = a + b;     // Calculate the sum of a and b
    cout << sum << endl; // Print the sum to the console
}

int main() // The main function, where program execution begins
{
    cout << "Addition is: "; // Display a message to the user

    // Call the add function with the arguments 40 and 20
    add(40, 20);

    int x, y; // Declare two integer variables, x and y

    cin >> x >> y; // Read two integers from the user and store them in x and y

    cout << "Addition is: "; // Display another message to the user

    // Call the add function with the values stored in x and y as arguments
    add(x, y);

    return 0; // Return 0 to indicate successful program execution
}
