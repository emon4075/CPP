// Priority: Local>>>>>Global
#include <iostream>
using namespace std;

int x = 20; // Global Variable

// Function to display the global variable 'x'
void global()
{
    // Access the global variable 'x'
    cout << "Value of X outside the main function: " << x << endl;
}

int main()
{
    int x = 10; // Local Variable

    // Display the value of the local variable 'x'
    cout << "Value of X inside the main function: " << x << endl;

    // Call the 'global' function, which accesses the global variable 'x'
    global();

    return 0;
}
