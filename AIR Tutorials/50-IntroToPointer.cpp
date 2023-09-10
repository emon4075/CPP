#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int X = 7; // Declare an integer variable X and initialize it with the value 7.
    int *ptr;  // Declare an integer pointer variable ptr.
    ptr = &X;  // Assign the address of X to the pointer variable ptr.

    cout << "Values of X: " << X << endl;                       // Print the value of X.
    cout << "Address stored in ptr: " << ptr << endl;           // Print the address stored in ptr.
    cout << "Address of X: " << &X << endl;                     // Print the address of X.
    cout << "Value stored in ptr: " << *ptr << endl;            // Print the value stored in the memory location pointed to by ptr.
    cout << setw(40) << "Address of pointer: " << &ptr << endl; // Print the address of the pointer variable ptr.

    return 0; // Return 0 to indicate successful execution of the program.
}
