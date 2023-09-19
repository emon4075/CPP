#include <iostream>
#include <cstring> // #include<string.h>
using namespace std;

int main()
{
    char name[20]; // Declare a character array 'name' with a maximum capacity of 20 characters.
    cout << "Enter Your Name: ";
    cin.getline(name, 20); // Read a line of text into 'name', with a maximum length of 19 characters.

    cout << "Length is: " << strlen(name) << endl; // Calculate and print the length of the entered name using the strlen function.

    return 0;
}
