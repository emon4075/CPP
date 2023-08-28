#include <iostream>
using namespace std;

int main()
{
    // Output: Abdullah Emon + alert (audible or visible alert)
    cout << "Abdullah Emon\a";

    // Output: Abdullah Emo (backspace removes one character)
    cout << "Abdullah Emon\b";

    // Output: Abdullah Emo (form feed - often used as a page break in output)
    cout << "Abdullah Emon\f";

    // Output: Abdullah Emon + newline
    cout << "Abdullah Emon\n";

    // Output: Abdullah Emon + carriage return (moves cursor to the start of the line)
    cout << "Abdullah Emon\r";

    // Output: Abdullah Emon + tab
    cout << "Abdullah Emon\t";

    // Output: Abdullah Emon + vertical tab (rarely used for vertical spacing)
    cout << "Abdullah Emon\v";

    // Output: Abdullah Emon + null character (string terminator)
    cout << "Abdullah Emon\0";

    // Output: 'Abdullah Emon' (single quotes within double quotes)
    cout << "\'Abdullah Emon\'";

    // Output: "Abdullah Emon" (double quotes within double quotes)
    cout << "\"Abdullah Emon\"";

    // Output: Abdullah Emon + question mark
    cout << "Abdullah Emon\?\n";
    
    // Output: Abdullah
    //         Emon
    //         4075
    cout << "Abdullah" << endl
         << "Emon" << endl
         << "4075";

    return 0;
}
