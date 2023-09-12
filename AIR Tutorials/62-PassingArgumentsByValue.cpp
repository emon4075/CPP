#include <iostream>
using namespace std;

// Function to display a value, with a default value of 20 if not provided
void display(int x = 20)
{
    cout << "Value from the function: " << x << endl;
}

int main()
{
    int X = 10;

    cout << "Before calling the function: " << X << endl;

    // Call the display function with the value of X
    display(X);

    cout << "After calling the function: " << X << endl;

    return 0;
}
