#include <iostream>
#include <stdlib.h>  // Include the standard library header for the rand() function.
using namespace std;

int main()
{
    int RandomNumber; // Declare an integer variable to store random numbers.

    // Generate and print 10 random numbers between 1 and 5.
    for (int i = 0; i < 10; i++)
    {
        RandomNumber = rand() % 5 + 1;                 // Generate a random number between 1 and 5.
        cout << "Number is: " << RandomNumber << endl; // Print the random number.
    }

    return 0;
}
