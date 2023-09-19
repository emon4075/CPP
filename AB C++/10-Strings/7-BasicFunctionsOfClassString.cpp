#include <iostream>
#include <string> //This includes String Class
using namespace std;

int main()
{
    // Declare a string variable to store user input
    string str;

    // Prompt the user to enter a string
    cout << "Enter a String: ";

    // Read an entire line of text, including spaces, into the 'str' variable
    getline(cin, str);

    // Display the length of the entered string
    cout << "Length Of String: " << str.length() << endl;

    // Display the size of the entered string (same as length in the case of strings)
    cout << "Size Of String: " << str.size() << endl;

    // Display the initial capacity of the string (the capacity may be greater than the length)
    cout << "Capacity Of String: " << str.capacity() << endl;

    // Resize the string to have a capacity of 30
    str.resize(30);

    // Display the capacity of the resized string
    cout << "Resized Capacity Of String: " << str.capacity() << endl;

    // Display the maximum size a string can have
    cout << "Max Size Of String: " << str.max_size() << endl;

    // Clear the contents of the string, making it empty
    str.clear();

    // Display the empty string
    cout << str << endl;

    // Display the length of the string after clearing (should be 0)
    cout << "String length after clearing: " << str.length() << endl;

    // Declare a second string variable
    string str2;

    // Prompt the user to enter a string (for empty input, press Enter)
    cout << "Enter a String: ";

    // Read an entire line of text, including spaces, into the 'str2' variable
    getline(cin, str2);

    // Check if the entered string is empty
    if (str2.empty())
    {
        cout << "String is empty\n";
    }
    else
    {
        // Display the entered string if it's not empty
        cout << "String is: " << str2 << endl;
    }

    // Return 0 to indicate successful execution
    return 0;
}