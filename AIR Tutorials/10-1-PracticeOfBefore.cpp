// This program collects and displays a person's biodata information.
#include <iostream>
using namespace std;

int main()
{
    // Declare variables to store biodata information.
    int Roll, Session;
    char name[10], uni[5], sub[5];

    // Prompt the user to input their name.
    cout << "Enter Your Name: ";
    cin >> name;

    // Prompt the user to input their university.
    cout << "Enter Your University: ";
    cin >> uni;

    // Prompt the user to input their subject.
    cout << "Enter Your Subject: ";
    cin >> sub;

    // Prompt the user to input their roll number.
    cout << "Enter Your Roll: " << endl;
    cin >> Roll;

    // Prompt the user to input their session.
    cout << "Enter Your Session: " << endl;
    cin >> Session;

    // Display a separator to improve readability.
    cout << "*****************************\n";

    // Display the collected biodata information.
    cout << "Name: " << name << endl;
    cout << "University: " << uni << endl;
    cout << "Subject: " << sub << endl;
    cout << "Roll: " << Roll << endl;
    cout << "Session: " << Session << endl;

    // Indicate successful program execution.
    return 0;
}