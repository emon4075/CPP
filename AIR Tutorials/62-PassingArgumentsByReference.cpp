#include <iostream>
using namespace std;

// Function to display a value, with a default value of 20 if not provided
void display(int *x)
{
    // Modify the value pointed to by x to be 20
    *x = 20;

    // Display the modified value
    cout << "Value from the function: " << *x << endl;
}

int main()
{
    // Declare and initialize an integer variable X to 10
    int X = 10;

    cout << "Before calling the function: " << X << endl;

    // Call the display function with a pointer to X
    display(&X);

    cout << "After calling the function: " << X << endl;

    return 0;
}
