#include <iostream>
using namespace std;

int main()
{
    char str[10] = "Hello"; // Initialize a character array 'str' with the string "Hello". It's null-terminated.
    cout << str << endl;    // Print the content of 'str' as a C-style string.

    char name[] = "Emon"; // Initialize a character array 'name' with the string "Emon". It's null-terminated.
    cout << name << endl; // Print the content of 'name' as a C-style string.

    char *place = "Chittagong"; // Initialize a pointer 'place' to a string literal "Chittagong".
    cout << place << endl;      // Print the content pointed to by 'place'.

    string uni = "Chittagong University"; // Create a C++ string 'uni' with the content "Chittagong University".
    cout << uni << endl;                  // Print the content of 'uni'.

    char college[] = {'S', 'o', 'n', 'a', 'r', '\0'}; // Initialize a character array 'college' with individual characters and a null-terminator.
    cout << college << endl;                          // Print the content of 'college' as a C-style string.

    char school[] = {'A', 'n', 'a', 'n', '\0', 'd', 'a'}; // Initialize a character array 'school' with individual characters and a null-terminator.
    cout << school << endl;                               // Print the content of 'school' as a C-style string.

    char alphabet[] = {65, 66, 67, 68, '\0'}; // Initialize a character array 'alphabet' with ASCII values and a null-terminator.
    cout << alphabet << endl;                 // Print the content of 'alphabet' as a C-style string.

    return 0;
}
