#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int N, i, count = 0;

    // Prompt the user for input
    cout << "Enter a Number: ";
    cin >> N;

    // Loop to check for factors of N
    for (i = 1; i <= N; i++)
    {
        // If N is divisible by i, increment the count
        if (N % i == 0)
        {
            count++;
        }
    }

    // Check if N is a prime number based on the count of factors
    if (count == 2)
    {
        // Prime Numbers will only be divisible by 1 & Number itself so count will be 2
        cout << N << " is a Prime Number!" << endl;
    }
    else
    {
        // Display the result if N is not prime
        cout << N << " is not a Prime Number!" << endl;
    }

    return 0;
}
