#include <iostream>
#include <string> // This includes the String Class
using namespace std;

int main()
{
    // Declare and initialize a string variable with the value "Hello"
    string str = "Hello";

    // Display the initial value of the string
    cout << "Text Before appending: " << str << endl;

    // Display the capacity and size of the string before appending
    cout << "Capacity and Size Before Append: " << str.capacity() << " " << str.size() << endl;

    // Append additional text to the string
    str.append(" Guys! How are you? I am fine.");

    // Display the string after appending
    cout << "Text after appending: " << str << endl;

    // Display the capacity and size of the string after appending
    cout << "Capacity and Size After Append: " << str.capacity() << " " << str.size() << endl;

    // Return 0 to indicate successful execution
    return 0;
}
