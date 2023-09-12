#include <iostream>
using namespace std;

int x = 20; // Global Variable

// Function to display the global variable 'x'
void global()
{
    ::x = 50; // Changed the global variable in global function
    // Access the global variable 'x' using the scope resolution operator (::)
    cout << "Value of X outside the main function after changing global vriable using scope resolution: " << x << endl;
}

int main()
{
    int x = 10; // Local Variable

    // Display the value of the global variable 'x' using the scope resolution operator (::)
    cout << "Value of X inside the main function after scope resolution: " << ::x << endl;

    // Call the 'global' function, which accesses the global variable 'x'
    global();

    return 0;
}
// To access the global variable we use ::(scope resolution operator)