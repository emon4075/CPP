#include <iostream>
#include <cstring> // Include the C string manipulation library for strcat and strncat functions.
using namespace std;

int main()
{
    char name[20];
    cout << "Enter Your Name: ";
    cin.getline(name, 20); // Read a line of text into 'name', with a maximum length of 19 characters.

    cout << "Enter ID: ";
    char id[10];
    cin.getline(id, 10); // Read a line of text into 'id', with a maximum length of 9 characters.

    strcat(name, id); // Concatenate 'id' to the end of 'name' (assuming 'name' has enough space).

    cout << name << endl; // Print the concatenated string.

    strncat(name, id, 2); // Concatenate the first 2 characters of 'id' to the end of 'name'.

    cout << name << endl; // Print the updated concatenated string.

    return 0;
}
