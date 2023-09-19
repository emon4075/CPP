#include <iostream>
#include <cstring> // Include the C string manipulation library for strcmp function.
using namespace std;

int main()
{
    char s1[] = "Hello";  // Declare a character array 's1' and initialize it with the string "Hello".
    char s2[] = "Hello";  // Declare a character array 's2' and initialize it with the string "Hello".
    char s3[] = "hello";  // Declare a character array 's3' and initialize it with the string "hello".
    char s4[] = "Mellow"; // Declare a character array 's4' and initialize it with the string "Mellow".

    // Use the strcmp function to compare 's1' and 's2'.
    // strcmp returns 0 if the strings are identical.
    cout << strcmp(s1, s2) << endl; // Print the result of the comparison between 's1' and 's2'.

    // Use the strcmp function to compare 's2' and 's3'.
    // strcmp is case-sensitive; it returns a value greater than 0 because 's2' and 's3' have different capitalization.
    cout << strcmp(s2, s3) << endl; // Print the result of the comparison between 's2' and 's3'.

    // Use the strcmp function to compare 's3' and 's4'.
    // strcmp returns a value less than 0 because 's3' comes before 's4' in lexicographic order.
    cout << strcmp(s3, s4) << endl; // Print the result of the comparison between 's3' and 's4'.

    return 0;
}
