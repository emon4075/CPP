#include <iostream>
#include <cstring> // Include the C string manipulation library for strcpy and strncpy functions.
using namespace std;

int main()
{
    char name[20]; // Declare a character array 'name' with a maximum capacity of 20 characters.
    cout << "Enter Your Name: ";
    cin.getline(name, 20); // Read a line of text into 'name', with a maximum length of 19 characters.

    char copy[20];      // Declare a character array 'copy' with the same capacity.
    strcpy(copy, name); // Copy the content of 'name' to 'copy' using strcpy.

    cout << "Copied String: " << copy << endl; // Print the copied string.

    char copyn[20];          // Declare a character array 'copyn' with the same capacity.
    strncpy(copyn, name, 4); // Copy the first 4 characters of 'name' to 'copyn' using strncpy.

    cout << "Copied till 4th element: " << copyn << endl; // Print the copied portion of 'name'.

    return 0;
}
