// This program converts a temperature in Celsius to Fahrenheit.

// Include the necessary input-output stream library.
#include <iostream>

// Use the standard namespace for easier access to standard library functions.
using namespace std;

// The main function where the program execution starts.
int main()
{
    // Declare variables to store Celsius and Fahrenheit temperatures.
    double cel, far;

    // Prompt the user to input a Celsius temperature.
    cout << "Enter Celsius Value: " << endl;
    cin >> cel;

    // Convert Celsius to Fahrenheit using the conversion formula.
    far = (1.8 * cel) + 32;

    // Display the converted Fahrenheit temperature.
    cout << "Fahrenheit Value: " << far;

    // Indicate successful program execution by returning 0.
    return 0;
}
// Farenhite to Celcius
/*

#include <iostream>
using namespace std;

int main()
{
    double far, cel;
    cout << "Enter Fahrenheit Value: " << endl;
    cin >> far;
    cel = (far - 32) / 1.8;
    cout << "Celsius Value: " << cel;
    return 0;
}


*/