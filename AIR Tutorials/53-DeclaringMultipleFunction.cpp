#include <iostream>
using namespace std;

// Function to add two integers and print the result
void add(int a, int b)
{
    int sum = a + b;     // Calculate the sum of a and b
    cout << sum << endl; // Print the sum to the console
}

// Function to subtract two integers and print the result
void sub(int a, int b)
{
    int subtraction = a - b;     // Calculate the subtraction of a and b
    cout << subtraction << endl; // Print the subtraction result to the console
}

// Function to multiply two integers and print the result
void multi(int a, int b)
{
    int multiplication = a * b;     // Calculate the multiplication of a and b
    cout << multiplication << endl; // Print the multiplication result to the console
}

// Function to divide two integers and print the result
void divi(int a, int b)
{
    int division = a / b;     // Calculate the division of a by b
    cout << division << endl; // Print the division result to the console
}

int main() // The main function, where program execution begins
{
    cout << "Division is: ";
    divi(40, 5); // Call the divi function with the arguments 40 and 5

    cout << "Subtraction is: ";
    sub(40, 5); // Call the sub function with the arguments 40 and 5

    cout << "Addition is: ";
    add(40, 5); // Call the add function with the arguments 40 and 5

    cout << "Multiplication is: ";
    multi(40, 5); // Call the multi function with the arguments 40 and 5

    return 0;
}
