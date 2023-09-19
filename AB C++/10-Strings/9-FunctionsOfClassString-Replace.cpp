#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Initialize a string variable with the value "Programming"
    string str = "Programming";

    // Display the string before replacement
    cout << "String Before Replacing: " << str << endl;

    // Replace a portion of the string starting at position 6 with the string "kki"
    str.replace(6, 2, "kki");

    // Display the string after replacement
    cout << "String After Replacing: " << str << endl;

    // Return 0 to indicate successful execution
    return 0;
}
