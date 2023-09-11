#include <iostream>
using namespace std;

// Function to display the elements of an integer array.
void DisplayArray(int num[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " "; // Print each element of the array.
    }
}

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5}; // Declare and initialize an integer array.

    // Call the 'DisplayArray' function to display the elements of the 'numbers' array.
    DisplayArray(numbers);

    return 0; // Return 0 to indicate successful execution.
}
