#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare two string variables, str1 and str2
    string str1, str2;

    // Initialize str1 and str2 with the values "Hello" and "World" respectively
    str1 = "Hello";
    str2 = "World";

    // Display the content of str1 and str2 before swapping
    cout << "String-1 Before Swapping: " << str1 << endl;
    cout << "String-2 Before Swapping: " << str2 << endl;

    // Swap the content of str1 and str2
    str1.swap(str2);

    // Display the content of str1 and str2 after swapping
    cout << "String-1 After Swapping: " << str1 << endl;
    cout << "String-2 After Swapping: " << str2 << endl;

    // Append the character 'S' to str1 using push_back
    str1.push_back('S');

    // Display str1 after the push_back operation
    cout << "String After Push Back: " << str1 << endl;

    // Remove the last character from str2 using pop_back
    str2.pop_back();

    // Display str2 after the pop_back operation
    cout << "String After Pop_Back: " << str2 << endl;

    // Erase the content of str1
    str1.erase();

    // Display str1 after erasing its content
    cout << "String-1 after erase: " << str1 << endl;

    // Display the length of str1 after erasing (should be 0)
    cout << "String-1 Length after erase: " << str1.length() << endl;

    // Return 0 to indicate successful execution
    return 0;
}
