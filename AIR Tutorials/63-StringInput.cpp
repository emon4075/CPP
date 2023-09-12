#include <iostream>
using namespace std;

int main()
{
    // Declare a character array to store the name (maximum length is 40 characters)
    char name[40];

    // Prompt the user to enter their name
    cout << "Enter Name: ";

    // Use the 'gets' function to read the name from the user (Note: 'gets' is considered unsafe and deprecated)
    gets(name);

    // Display a welcome message with the entered name
    cout << "Welcome " << name << endl;

    return 0;
}

// Another Way
/*

#include <iostream>
using namespace std;

int main()
{
    string name; // Use a string to store the name

    cout << "Enter Name: ";
    cin >> name;

    cout << "Welcome " << name << endl;

    return 0;
}


*/