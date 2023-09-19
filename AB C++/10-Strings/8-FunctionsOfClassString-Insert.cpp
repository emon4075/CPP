// Start Counting From 0
#include <iostream>
#include <string> // This includes the String Class
using namespace std;

int main()
{
    // Initialize a string variable with the value "How you"
    string str = "How you";

    // Display the string before insertion
    cout << "String Before Insertion: " << str << endl;

    // Insert the substring "are " at position 4 in the string
    str.insert(4, "are ");

    // Display the string after insertion
    cout << "String After Insertion: " << str << endl;

    // Display the string again
    cout << str << endl;

    // Insert a question mark at position 11 in the string
    str.insert(11, "?");

    // Display the string after the second insertion
    cout << "String After Second Insertion: " << str << endl;

    // Return 0 to indicate successful execution
    return 0;
}
