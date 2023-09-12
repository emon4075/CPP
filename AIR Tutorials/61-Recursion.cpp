#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
long long fact(long long n)
{
    if (n == 1)
    {
        // Base case: If n is 1, return 1 (the factorial of 1)
        return 1;
    }
    else
    {
        // Recursive case: Calculate the factorial of n by multiplying n with the factorial of (n-1)
        return n * fact(n - 1);
    }
}

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    // Calculate and print the factorial of the entered number
    cout << "Factorial of " << num << " is: " << fact(num) << endl;

    return 0;
}
