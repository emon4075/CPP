#include <iostream>
using namespace std;

// Function to calculate and print the sum of two integers.
void sum(int a, int b)
{
    int sum = a + b;
    cout << "Sum of Two is: " << sum << endl;
}

// Function to calculate and print the sum of three integers.
void sum(int a, int b, int c)
{
    int result = a + b + c;
    cout << "Sum of Three is: " << result << endl;
}

int main()
{
    // Call the 'sum' function with two arguments and print the result.
    sum(21, 22);

    // Call the 'sum' function with three arguments and print the result.
    sum(21, 22, 23);

    return 0; // Return 0 to indicate successful execution.
}