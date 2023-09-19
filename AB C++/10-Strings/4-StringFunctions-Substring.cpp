#include <iostream>
#include <cstring> // Include the C string manipulation library for strstr function.
using namespace std;

int main()
{
    char s1[] = "Programming"; // Declare a character array 's1' and initialize it with the string "Programming".
    char s2[] = "g";           // Declare a character array 's2' and initialize it with the string "g".

    // Use the strstr function to search for the first occurrence of 's2' within 's1'.
    // If 's2' is found within 's1', strstr returns a pointer to the first occurrence; otherwise, it returns NULL.
    if (strstr(s1, s2) != NULL)
    {
        cout << strstr(s1, s2) << endl; // Print the pointer to the first occurrence of 's2' in 's1'.
    }
    else
    {
        cout << "Not Found" << endl; // Print "Not Found" if 's2' is not found within 's1'.
    }

    return 0;
}
