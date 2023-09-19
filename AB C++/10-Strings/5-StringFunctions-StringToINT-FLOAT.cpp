#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[] = "235";
    char s2[] = "20.10";

    cout << s1 + 67 << endl; // Not Meaningful - Adding an integer to a character array pointer, not meaningful in this context

    long int x = strtol(s1, NULL, 10); // Convert string s1 to a long integer
    float y = strtof(s2, NULL);        // Convert string s2 to a floating-point number

    cout << "Addition of 10 with X: " << x + 10 << endl;     // Add 10 to the long integer x
    cout << "Addition of 5.10 with Y: " << y + 5.10 << endl; // Add 5.10 to the floating-point number y

    return 0;
}
