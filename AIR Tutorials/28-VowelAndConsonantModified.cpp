#include <iostream> // Include the input-output stream library

using namespace std; // Using the standard namespace

int main() // Main function where the program execution begins
{
    char ch; // Declare a variable 'ch' to store the character

    cout << "Enter a Character: "; // Display a prompt to the user
    cin >> ch;                     // Read a character from the user

    ch = tolower(ch); // Convert the character to lowercase

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        // Check if the character is a vowel
        cout << ch << " is a Vowel!" << endl; // Display that it's a vowel
    }
    else
    {
        // If not a vowel, it's a consonant
        cout << ch << " is a Consonant!" << endl; // Display that it's a consonant
    }

    return 0; // Return 0 to indicate successful completion
}
