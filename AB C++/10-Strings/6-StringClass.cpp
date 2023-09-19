#include <iostream>
#include <string> // This includes the class String
using namespace std;

int main()
{
    // Declare a string variable named str to store user input
    string str;

    // Prompt the user to enter a string
    cout << "Enter a String: ";

    // Read a line of input (including spaces) and store it in the str variable
    getline(cin, str);

    // Display the entered string
    cout << "String is: " << str << endl;

    // Return 0 to indicate successful execution
    return 0;
}
