#include <iostream>
using namespace std;
double add(double a, double b)
{
    double sum = a + b; // Calculate the sum of 'a' and 'b'.
    return sum;         // Return the result of the addition.
}

int main()
{
    cout << "Addition is: "; // Output a message.
    cout << add(10.1, 9.9);  // Call the 'add' function and print the result.
    return 0;
}
