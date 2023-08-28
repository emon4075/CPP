#include <iostream>
using namespace std;

int main()
{
    // Declaring a character array to store a name
    char name[10];

    // Prompting the user to enter their name
    cout << "Enter Your Name: ";
    
    // Reading the entered name from the user and storing it in 'name'
    cin >> name;

    // Declaring an integer variable to store a roll number
    int Roll;

    // Prompting the user to enter their roll number
    cout << "Enter Your Roll: ";

    // Reading the entered roll number from the user and storing it in 'Roll'
    cin >> Roll;

    // Displaying the entered name and roll number
    cout << "Your Name: " << name << endl;
    cout << "Your Roll: " << Roll << endl;

    // Declaring two integer variables for number input and addition
    int n1, n2;

    // Prompting the user to enter two numbers
    cout << "Enter Two Numbers: " << endl;

    // Reading the entered numbers and storing them in 'n1' and 'n2'
    cin >> n1 >> n2;

    // Calculating the sum of the entered numbers
    int sum = n1 + n2;

    // Displaying the sum of the entered numbers
    cout << "Sum is: " << sum << endl;

    return 0; // Indicating successful program termination
}
